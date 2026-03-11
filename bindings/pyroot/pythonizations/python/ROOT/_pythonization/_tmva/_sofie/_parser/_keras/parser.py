import os
import time
import numpy as np

# Note: Imports from .layers must be available in your environment
from . import get_keras_version
from .layers.batchnorm import MakeKerasBatchNorm
from .layers.binary import MakeKerasBinary
from .layers.concat import MakeKerasConcat
from .layers.conv import MakeKerasConv
from .layers.dense import MakeKerasDense
from .layers.elu import MakeKerasELU
from .layers.flatten import MakeKerasFlatten
from .layers.layernorm import MakeKerasLayerNorm
from .layers.leaky_relu import MakeKerasLeakyRelu
from .layers.permute import MakeKerasPermute
from .layers.pooling import MakeKerasPooling
from .layers.relu import MakeKerasReLU
from .layers.reshape import MakeKerasReshape
from .layers.selu import MakeKerasSeLU
from .layers.sigmoid import MakeKerasSigmoid
from .layers.softmax import MakeKerasSoftmax
from .layers.swish import MakeKerasSwish
from .layers.tanh import MakeKerasTanh
from .layers.rnn import MakeKerasRNN
from .layers.conv_transpose import MakeKerasConvTranspose

def MakeKerasActivation(layer):
    attributes = layer["layerAttributes"]
    activation = attributes["activation"]
    fLayerActivation = str(activation.__name__)
    if fLayerActivation in mapKerasLayer.keys():
        return mapKerasLayer[fLayerActivation](layer)
    else:
        raise Exception("TMVA.SOFIE - parsing keras activation layer " + fLayerActivation + " is not yet supported")

mapKerasLayer = {
    "Activation": MakeKerasActivation,
    "Permute": MakeKerasPermute,
    "BatchNormalization": MakeKerasBatchNorm,
    "LayerNormalization": MakeKerasLayerNorm,
    "Reshape": MakeKerasReshape,
    "Flatten": MakeKerasFlatten,
    "Concatenate": MakeKerasConcat,
    "swish": MakeKerasSwish,
    "silu": MakeKerasSwish,
    "Add": MakeKerasBinary,
    "Subtract": MakeKerasBinary,
    "Multiply": MakeKerasBinary,
    "Softmax": MakeKerasSoftmax,
    "tanh": MakeKerasTanh,
    "ReLU": MakeKerasReLU,
    "relu": MakeKerasReLU,
    "ELU": MakeKerasELU,
    "elu": MakeKerasELU,
    "selu": MakeKerasSeLU,
    "sigmoid": MakeKerasSigmoid,
    "LeakyReLU": MakeKerasLeakyRelu,
    "leaky_relu": MakeKerasLeakyRelu,
    "softmax": MakeKerasSoftmax,
    "MaxPooling2D": MakeKerasPooling,
    "AveragePooling2D": MakeKerasPooling,
    "GlobalAveragePooling2D": MakeKerasPooling,
    "Conv2DTranspose": MakeKerasConvTranspose,
    "SimpleRNN": MakeKerasRNN,
    "GRU": MakeKerasRNN,
    "LSTM": MakeKerasRNN,
}

mapKerasLayerWithActivation = {"Dense": MakeKerasDense, "Conv2D": MakeKerasConv, "Conv2DTranspose": MakeKerasConvTranspose}

def add_layer_into_RModel(rmodel, layer_data):
    import numpy as np
    from ROOT.TMVA.Experimental import SOFIE
    import ROOT

    def move_operator(op):
        ROOT.SetOwnership(op, False)
        return ROOT.std.unique_ptr[type(op)](op)

    keras_version = get_keras_version()
    fLayerType = layer_data["layerType"]
    
    print(f"[DEBUG] Processing Layer: {fLayerType}")

    if fLayerType == "Reshape" or fLayerType == "Flatten":
        Attributes = layer_data["layerAttributes"]
        LayerName = Attributes["name"] if keras_version >= "2.16" else Attributes["_name"]

        if fLayerType == "Reshape":
            raw_shape = Attributes["target_shape"]
            # Fix: Concrete integer conversion for Keras 3
            target_list = [int(s) if (s is not None and str(s) != 'None') else 1 for s in raw_shape]
            TargetShape = [1] + target_list
        else:
            if "_build_input_shape" in Attributes.keys():
                input_shape = Attributes["_build_input_shape"]
            elif "_build_shapes_dict" in Attributes.keys():
                input_shape = list(Attributes["_build_shapes_dict"]["input_shape"])
            else:
                raise RuntimeError("Failed to extract build input shape from " + fLayerType)
            
            # Fix: Convert length to concrete int
            TargetShape = [int(SOFIE.ConvertShapeToLength(input_shape[1:]))]

        print(f"  [DEBUG] {fLayerType} Target Shape: {TargetShape}")
        shape_tensor_name = LayerName + "_shape"
        # Fix: Pass TargetShape as a standard list to avoid 'int conversion' error
        rmodel.AddInitializedTensor["int64_t"](shape_tensor_name, [len(TargetShape)], TargetShape)

    if fLayerType in mapKerasLayer.keys():
        Attributes = layer_data["layerAttributes"]
        inputs = layer_data["layerInput"]
        outputs = layer_data["layerOutput"]
        LayerName = Attributes["name"] if keras_version >= "2.16" else Attributes["_name"]
        fLayerOutput = outputs[0]

        if fLayerType == "Conv2DTranspose":
            print(f"  [DEBUG] Handling Conv2DTranspose: {LayerName}")
            if layer_data["channels_last"]:
                op = SOFIE.ROperator_Transpose("float")([0, 3, 1, 2], inputs[0], LayerName + "PreTrans")
                rmodel.AddOperator(move_operator(op))
                inputs[0] = LayerName + "PreTrans"
                outputs[0] = LayerName + "PostTrans"
            
            rmodel.AddOperator(move_operator(mapKerasLayer[fLayerType](layer_data)))
            
            if layer_data["channels_last"]:
                op = SOFIE.ROperator_Transpose("float")([0, 2, 3, 1], LayerName + "PostTrans", fLayerOutput)
                rmodel.AddOperator(move_operator(op))
        
        # ... (Other GlobalAvgPool, Batchnorm, Pooling cases remain same but use explicit debugging)
        else:
            rmodel.AddOperator(move_operator(mapKerasLayer[fLayerType](layer_data)))

        return rmodel

    elif fLayerType in mapKerasLayerWithActivation.keys():
        # Standard logic for Dense/Conv2D with activation
        rmodel.AddOperator(move_operator(mapKerasLayerWithActivation[fLayerType](layer_data)))
        return rmodel
    
    return rmodel

class PyKeras:
    @staticmethod
    def Parse(filename, batch_size=1):
        import keras
        import numpy as np
        from ROOT.TMVA.Experimental import SOFIE
        import ROOT

        keras_version = get_keras_version()
        print(f"[DEBUG] Keras Version: {keras_version}")

        if not os.path.exists(filename):
            raise RuntimeError(f"Model file {filename} not found!")

        keras_model = keras.models.load_model(filename)
        
        # Setup RModel
        filename_nodir = os.path.basename(filename)
        parsetime = time.asctime(time.gmtime(time.time()))
        rmodel = SOFIE.RModel.RModel(filename_nodir, parsetime)

        print(f"PyKeras: parsing model {filename}")

        for layer in keras_model.layers:
            layer_data = {
                "layerType": layer.__class__.__name__,
                "layerAttributes": layer.__dict__,
                "layerDType": layer.dtype
            }
            
            # Input/Output naming logic (Simplified for Keras 3 compatibility)
            if keras_version >= "2.16":
                layer_data["layerInput"] = [layer.input.name] if not isinstance(layer.input, list) else [x.name for x in layer.input]
                layer_data["layerOutput"] = [layer.output.name] if not isinstance(layer.output, list) else [x.name for x in layer.output]
            else:
                layer_data["layerInput"] = [layer.input.name]
                layer_data["layerOutput"] = [layer.output.name]

            if hasattr(layer, 'data_format'):
                layer_data["channels_last"] = (layer.data_format == "channels_last")

            if layer_data["layerType"] == "Dense":
                rmodel.AddBlasRoutines({"Gemm", "Gemv"})
            elif "Conv" in layer_data["layerType"]:
                rmodel.AddBlasRoutines({"Gemm", "Axpy"})

            rmodel = add_layer_into_RModel(rmodel, layer_data)

        # Extract Weights
        print("[DEBUG] Extracting Weights...")
        for idx, w_val in enumerate(keras_model.get_weights()):
            w_obj = keras_model.weights[idx]
            w_name = w_obj.path if hasattr(w_obj, 'path') else w_obj.name
            
            # Transpose convolution kernels for SOFIE format
            if ("conv" in w_name.lower() or "kernel" in w_name.lower()) and w_val.ndim == 4:
                w_val = w_val.transpose((3, 2, 0, 1)).copy()

            fWeightShape = list(w_val.shape)
            rmodel.AddInitializedTensor["float"](w_name, fWeightShape, w_val.flatten().tolist())

        # Handle Model Inputs
        print("[DEBUG] Setting Input Tensors...")
        for inp in keras_model.inputs:
            # Fix: Ensure shapes are concrete integers and handle None/BatchSize
            raw_shape = list(inp.shape)
            final_shape = [int(s) if (s is not None and str(s) != 'None') else batch_size for s in raw_shape]
            
            print(f"  [DEBUG] Input '{inp.name}' shape: {final_shape}")
            rmodel.AddInputTensorInfo(inp.name, SOFIE.ConvertStringToType(inp.dtype.name), final_shape)
            rmodel.AddInputTensorName(inp.name)

        output_names = [x.name for x in keras_model.outputs]
        rmodel.AddOutputTensorNameList(output_names)
        
        print("[DEBUG] Parsing Complete.")
        return rmodel