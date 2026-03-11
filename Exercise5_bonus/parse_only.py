import os
import sys
import json
import numpy as np

# --- STAGE 1: KERAS EXTRACTION ---
def keras_process():
    import keras
    model = keras.models.load_model("gsoc_sofie_test.h5", compile=False)
    
    def normalize(name): 
        return name.replace('/', '_').replace(':', '_').replace('.', '_').replace(' ', '_')
    
    weights_dict = {}
    layers_info = []
    
    for layer in model.layers:
        if layer.__class__.__name__ == "InputLayer": continue
        
        layer_weights = {}
        for w in layer.weights:
            unique_w_name = normalize(f"{layer.name}_{w.name}")
            w_data = w.numpy()
            
            if layer.__class__.__name__ == "LSTM":
                units = layer.units
                if "kernel" in w.name and "recurrent" not in w.name:
                    if w_data.shape[-1] == units * 4: w_data = w_data[:, :units]
                elif "bias" in w.name and w_data.shape[0] == units * 4:
                    w_data = w_data[:units]

            weights_dict[unique_w_name] = w_data
            if 'kernel' in w.name and 'recurrent' not in w.name: layer_weights['kernel'] = unique_w_name
            if 'bias' in w.name: layer_weights['bias'] = unique_w_name
            
        layers_info.append({
            "name": layer.name, "type": layer.__class__.__name__,
            "in": normalize(layer.input.name), "out": normalize(layer.output.name),
            "shape": [1 if s is None or s == -1 else s for s in layer.output.shape],
            "weights": layer_weights
        })
    
    np.savez("tmp_weights.npz", **weights_dict)
    with open("tmp_meta.json", "w") as f:
        json.dump({"in_name": normalize(model.inputs[0].name), 
                   "in_shape": [1 if s is None else s for s in model.inputs[0].shape],
                   "layers": layers_info}, f)

if __name__ == "__main__":
    if "RUN_STAGE_1" in os.environ:
        keras_process(); sys.exit(0)

    import subprocess
    print("--- Stage 1: Extraction ---")
    subprocess.run([sys.executable, __file__], env={**os.environ, "RUN_STAGE_1": "1"})

    import ROOT
    root_lib_dir = "/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/root-build/lib"
    ROOT.gSystem.Load(os.path.join(root_lib_dir, "libROOTTMVASofie.so"))

    ROOT.gInterpreter.Declare("""
    #include "TMVA/RModel.hxx"
    #include "TMVA/ROperator_ConvTranspose.hxx"
    #include "TMVA/ROperator_Gemm.hxx"
    #include "TMVA/ROperator_Reshape.hxx"

    using namespace TMVA::Experimental::SOFIE;

    class SofieBuilder {
    public:
        RModel model;
        SofieBuilder() : model("model_output") {}

        void addWeight(std::string name, std::vector<size_t> shape, std::vector<float> data) {
            model.AddInitializedTensor<float>(name, shape, data.data());
        }

        void addInput(std::string name, std::vector<size_t> shape) {
            model.AddInputTensorInfo(name, ConvertStringToType("float"), shape);
            model.AddInputTensorName(name);
        }

        void addConvTranspose(std::vector<size_t> k, std::vector<size_t> s, std::string x, std::string w, std::string b, std::string y) {
            model.AddIntermediateTensor(y, ConvertStringToType("float"));
            auto op = std::make_unique<ROperator_ConvTranspose<float>>("NOTSET", std::vector<size_t>{0,0}, 1, k, {0,0}, {}, {0,0,0,0}, s, x, w, b, y);
            model.AddOperator(std::move(op));
        }

        void addGemm(std::string x, std::string w, std::string b, std::string y) {
            model.AddIntermediateTensor(y, ConvertStringToType("float"));
            auto op = std::make_unique<ROperator_Gemm<float>>(1.0, 1.0, 0, 1, x, w, b, y);
            model.AddOperator(std::move(op));
        }

        void addReshape(std::string x, std::string shape_name, std::string y, std::vector<long long> shape_data) {
            std::vector<int64_t> s64(shape_data.begin(), shape_data.end());
            model.AddInitializedTensor<int64_t>(shape_name, {s64.size()}, s64.data());
            model.AddIntermediateTensor(y, ConvertStringToType("float"));
            auto op = std::make_unique<ROperator_Reshape>(static_cast<ReshapeOpMode>(1), 0, x, shape_name, y);
            model.AddOperator(std::move(op));
        }

        void save(std::string filename, std::string last_tensor) {
            model.AddOutputTensorNameList({last_tensor});
            model.Generate();
            model.OutputGenerated(filename);
        }
    };
    """)

    builder = ROOT.SofieBuilder()
    with open("tmp_meta.json", "r") as f: meta = json.load(f)
    weights = np.load("tmp_weights.npz")
    
    print("--- Stage 2: Weights ---")
    for name in weights.files:
        v = np.ascontiguousarray(weights[name], dtype=np.float32)
        if v.ndim == 4: v = np.transpose(v, (3, 2, 0, 1))
        # SOFIE Gemm transB=1 expects (Out, In)
        if v.ndim == 2 and "kernel" in name: v = np.transpose(v)
        builder.addWeight(str(name), list(v.shape), v.flatten().tolist())

    builder.addInput(str(meta["in_name"]), [int(s) for s in meta["in_shape"]])

    print("--- Stage 3: Graph ---")
    last_t = meta["in_name"]
    for l in meta["layers"]:
        out_t = str(l['out'])
        w_kernel, w_bias = str(l['weights'].get('kernel', '')), str(l['weights'].get('bias', ''))
        
        if l['type'] == "Conv2DTranspose":
            builder.addConvTranspose([3,3], [2,2], last_t, w_kernel, w_bias, out_t)
        elif l['type'] in ["Dense", "LSTM"]:
            # Correctly register the auto-flatten intermediate tensor
            k_in = weights[w_kernel].shape[0] if "kernel" in w_kernel else 0
            # If we transposed (In, Out) to (Out, In), the "In" is now index 1
            if "kernel" in w_kernel: k_in = weights[w_kernel].shape[0] # Actually based on the loaded npz

            flat_t = f"{out_t}_auto_flat"
            print(f"  Flattening {last_t} -> {flat_t} (size {k_in})")
            builder.addReshape(last_t, f"{out_t}_fshape", flat_t, [1, int(k_in)])
            builder.addGemm(flat_t, w_kernel, w_bias, out_t)
        elif l['type'] in ["Reshape", "Flatten"]:
            builder.addReshape(last_t, f"{out_t}_shape", out_t, [int(s) for s in l['shape']])
        last_t = out_t

    print("--- Stage 4: Finalizing ---")
    try:
        builder.save("model_output.h", str(last_t))
        print(f"\n--- [SUCCESS] model_output.h created ---")
    except Exception as e:
        print(f"\n--- [FAILURE] {e} ---")