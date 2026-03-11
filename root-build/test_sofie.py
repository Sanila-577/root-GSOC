import torch
import torch.nn as nn
import ROOT

# ==========================================
# 1. DEFINE THE PYTORCH MODEL
# ==========================================
class GSoCModel(nn.Module):
    def __init__(self):
        super().__init__()
        # A Convolutional layer (looks for patterns)
        self.conv = nn.Conv2d(1, 10, kernel_size=5)
        # A ReLU activation layer (makes the decisions)
        self.relu = nn.ReLU()

    def forward(self, x):
        return self.relu(self.conv(x))

model = GSoCModel()

# ==========================================
# 2. SAVE AS TORCHSCRIPT (THE "BRIDGE")
# ==========================================
dummy_input = torch.randn(1, 1, 28, 28)
traced_model = torch.jit.trace(model, dummy_input)
traced_model.save("gsoc_model.pt")
print("Successfully saved gsoc_model.pt")

# ==========================================
# 3. CONVERT SHAPES TO C++ VECTORS (THE M-MAC FIX)
# ==========================================
inner_vec = ROOT.std.vector('size_t')()
for dim in [1, 1, 28, 28]:
    inner_vec.push_back(dim)

input_shapes = ROOT.std.vector('std::vector<size_t>')()
input_shapes.push_back(inner_vec)

# ==========================================
# 4. PARSE WITH SOFIE (CREATE THE IR)
# ==========================================
print("Attempting to parse the model into SOFIE IR...")
sofie_model = ROOT.TMVA.Experimental.SOFIE.PyTorch.Parse("gsoc_model.pt", input_shapes)

# ==========================================
# 5. VERIFY THE BLUEPRINT
# ==========================================
print("\n--- SOFIE IR Successfully Created! ---")
print(f"Success! The Parser returned: {type(sofie_model)}")
print(f"Model Name: {sofie_model.GetName()}")
print("\nExercise 3 is complete! The bridge is working.")