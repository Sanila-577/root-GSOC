import torch

def get_const_value(value_node):
    """Universal extractor for TorchScript constants (ints, floats, lists, tensors)."""
    node = value_node.node()
    if node.kind() != "prim::Constant":
        if node.kind() == "prim::ListConstruct":
            return [get_const_value(i) for i in node.inputs()]
        return "Non-Constant"

    # Check which type of constant it is and use the correct accessor
    for attr_name in node.attributeNames():
        if attr_name == "value":
            # This is the tricky part: we must match the type
            if node.hasAttribute("value"):
                kind = node.kindOf("value")
                if kind == 'f': return node.f("value")  # Float
                if kind == 'i': return node.i("value")  # Int
                if kind == 's': return node.s("value")  # String
                if kind == 't': return node.t("value")  # Tensor
                if kind == 'is': return list(node.is_("value")) # Int List
                if kind == 'fs': return list(node.fs("value")) # Float List
    return None

def parse_model(path):
    model = torch.jit.load(path)
    model.eval()
    # Using inlined_graph ensures we see the actual math nodes like aten::elu
    graph = model.inlined_graph
    state_dict = model.state_dict()

    parsed_results = []
    print(f"\n--- Parsing Layers from {path} ---")

    for node in graph.nodes():
        kind = node.kind()
        layer_info = {"kind": kind}
        inputs = list(node.inputs())

        # 1. ELU (aten::elu(input, alpha, scale, input_scale))
        if "aten::elu" in kind:
            alpha = get_const_value(inputs[1])
            layer_info.update({"type": "ELU", "alpha": alpha})
            print(f"[SUCCESS] Found ELU | Alpha: {alpha}")

        # 2. MaxPool2D
        elif "max_pool2d" in kind:
            kernel = get_const_value(inputs[1])
            stride = get_const_value(inputs[2])
            layer_info.update({"type": "MaxPool2D", "kernel": kernel, "stride": stride})
            print(f"[SUCCESS] Found MaxPool2d | Kernel: {kernel} | Stride: {stride}")

        # 3. BatchNorm
        elif "batch_norm" in kind:
            eps = get_const_value(inputs[7])
            layer_info.update({"type": "BatchNorm2d", "eps": eps})
            print(f"[SUCCESS] Found BatchNorm2d | Eps: {eps}")

        # 4. LSTM / RNN / GRU
        elif any(name in kind for name in ["lstm", "rnn", "gru"]):
            l_type = kind.split("::")[-1].upper()
            if "RNN" in l_type:
                l_type = "RNN"
            layer_info.update({"type": l_type})
            
            # Extract weights and split them (The "Complexity" requirement)
            for key, val in state_dict.items():
                if "weight_ih" in key:
                    chunks = 4 if "lstm" in kind else (3 if "gru" in kind else 1)
                    if chunks > 1:
                        gates = torch.chunk(val, chunks, 0)
                        layer_info["gate_shapes"] = [list(g.shape) for g in gates]
            print(f"[SUCCESS] Found {l_type} | Weights split for SOFIE")

        if len(layer_info) > 1:
            parsed_results.append(layer_info)

    return parsed_results

if __name__ == "__main__":
    results = parse_model("master_model.pt")
    print("\n--- Final Parsed Output (Exercise 4 Format) ---")
    import pprint
    pprint.pprint(results)