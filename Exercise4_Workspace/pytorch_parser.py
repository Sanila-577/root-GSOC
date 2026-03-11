import torch

def parse_model(path):
    # Load the TorchScript model
    model = torch.jit.load(path)
    # Important: Ensure the model is in eval mode
    model.eval()
    
    graph = model.graph
    state_dict = model.state_dict()

    print(f"\n--- Full Graph Dump ---")
    # This will print EVERYTHING in the graph so we can find the right names
    print(graph)

    print(f"\n--- Analyzing Graph Nodes ---")
    for node in graph.nodes():
        kind = node.kind()
        print(f"Found node kind: {kind}") # Debug line to see what's happening

        # We use 'in' because TorchScript often prefixes names (e.g., aten::elu)
        if "elu" in kind:
            # Extracting attributes from the graph
            inputs = list(node.inputs())
            # Usually: input 0 = data, input 1 = alpha
            alpha = inputs[1].toPyObject() if len(inputs) > 1 else 1.0
            print(f"  [SUCCESS] ELU Layer found | Alpha: {alpha}")

        elif "max_pool2d" in kind:
            inputs = list(node.inputs())
            # MaxPool2d(input, kernel_size, stride, padding, dilation, ceil_mode)
            kernel = inputs[1].toPyObject()
            stride = inputs[2].toPyObject()
            print(f"  [SUCCESS] MaxPool2d found | Kernel: {kernel} | Stride: {stride}")

        elif "batch_norm" in kind:
            print(f"  [SUCCESS] BatchNorm2D found")

        elif "lstm" in kind:
            print(f"  [SUCCESS] LSTM found")
            # LSTM has many inputs. Input index 3 is usually hidden_size
            inputs = list(node.inputs())
            hidden_size = inputs[3].toPyObject()
            print(f"    -> Hidden Size: {hidden_size}")

            # Match weights from state_dict
            for key in state_dict:
                if "lstm.weight_ih" in key:
                    w_ih = state_dict[key]
                    # This is the "suitable format" part: 
                    # PyTorch stores weights as (IFGO) order. 
                    # We split them to prepare for SOFIE.
                    i, f, g, o = w_ih.chunk(4, 0)
                    print(f"    -> Gates extracted. Forget gate shape: {f.shape}")

# Run it
parse_model("master_model.pt")