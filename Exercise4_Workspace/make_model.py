import torch
import torch.nn as nn

class MasterModel(nn.Module):
    def __init__(self):
        super().__init__()
        # 1. ELU
        self.elu = nn.ELU(alpha=1.2)
        # 2. MaxPool2d
        self.pool = nn.MaxPool2d(kernel_size=2, stride=2)
        # 3. BatchNorm2d
        self.batchnorm = nn.BatchNorm2d(10)
        
        # Recurrent Layers (using 10 input features, 20 hidden units)
        # 4. LSTM
        self.lstm = nn.LSTM(10, 20, batch_first=True)
        # 5. GRU
        self.gru = nn.GRU(20, 20, batch_first=True) # Takes output of LSTM
        # 6. RNN
        self.rnn = nn.RNN(20, 10, batch_first=True) # Takes output of GRU

    def forward(self, x):
        # Initial shape: (1, 10, 4, 4)
        x = self.elu(x)
        x = self.pool(x)
        x = self.batchnorm(x)
        
        # Reshape for recurrent layers: (batch, sequence_length, features)
        # We flatten the spatial dims (2x2) into a sequence of 4
        x = x.view(x.size(0), -1, 10) 
        
        # Pass through recurrent chain
        x, _ = self.lstm(x)
        x, _ = self.gru(x)
        x, _ = self.rnn(x)
        
        return x

# Create and save the model
model = MasterModel()
model.eval() # Good practice to set eval mode before tracing
dummy_input = torch.randn(1, 10, 4, 4)
traced_model = torch.jit.trace(model, dummy_input)
traced_model.save("master_model.pt")

print("Successfully saved master_model.pt with all 6 required layers.")