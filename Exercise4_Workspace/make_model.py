import torch
import torch.nn as nn

class MasterModel(nn.Module):
    def __init__(self):
        super().__init__()
        # Adding a variety of the requested layers
        self.elu = nn.ELU(alpha=1.2)
        self.pool = nn.MaxPool2d(kernel_size=2)
        self.batchnorm = nn.BatchNorm2d(10)
        # LSTM is the complex one: 10 input features, 20 hidden units
        self.lstm = nn.LSTM(10, 20, batch_first=True)

    def forward(self, x):
        # x shape: (batch, 10, height, width)
        x = self.elu(x)
        x = self.pool(x)
        x = self.batchnorm(x)
        # Flattening for the LSTM
        x = x.view(x.size(0), -1, 10) 
        out, (hn, cn) = self.lstm(x)
        return out

model = MasterModel()
# Trace with a dummy input
dummy = torch.randn(1, 10, 4, 4)
traced = torch.jit.trace(model, dummy)
traced.save("master_model.pt")
print("Master model with LSTM saved!")