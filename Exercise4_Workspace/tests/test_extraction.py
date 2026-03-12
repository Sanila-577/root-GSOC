import sys
import os
import unittest
import torch

# Adjusting path to import from the parent directory where pytorch_parser.py is located
sys.path.append(os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

try:
    from pytorch_parser import parse_model
except ImportError:
    print("[ERROR] Could not find pytorch_parser.py in the parent directory.")
    sys.exit(1)

class TestSofieParser(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        """Ensure the model exists before running tests."""
        cls.model_path = "master_model.pt"
        if not os.path.exists(cls.model_path):
            print(f"[INFO] Generating {cls.model_path} for testing...")
            # This assumes make_model.py is in the parent directory
            os.system(f"python3 {os.path.join(os.path.dirname(__file__), '../make_model.py')}")
        
        cls.results = parse_model(cls.model_path)
        # Create a lookup dictionary by layer type
        cls.layer_map = {res['type']: res for res in cls.results}

    def test_layer_completeness(self):
        """Verify all 6 required layers are present in the parsed output."""
        required_layers = ["ELU", "MaxPool2D", "BatchNorm2d", "LSTM", "GRU", "RNN"]
        for layer in required_layers:
            with self.subTest(layer=layer):
                self.assertIn(layer, self.layer_map, f"Missing required layer: {layer}")

    def test_elu_attributes(self):
        """Verify ELU alpha extraction."""
        elu = self.layer_map.get("ELU")
        if elu:
            self.assertEqual(elu['alpha'], 1.2, "ELU Alpha mismatch")

    def test_pool_attributes(self):
        """Verify MaxPool2D kernel and stride."""
        pool = self.layer_map.get("MaxPool2D")
        if pool:
            self.assertEqual(pool['kernel'], [2, 2], "MaxPool kernel mismatch")
            self.assertEqual(pool['stride'], [2, 2], "MaxPool stride mismatch")

    def test_recurrent_gate_splitting(self):
        """Verify recurrent layers handled the gate splitting (Complexity Requirement)."""
        # Check LSTM (4 gates: i, f, g, o)
        lstm = self.layer_map.get("LSTM")
        if lstm:
            self.assertEqual(len(lstm['gate_shapes']), 4, "LSTM should have 4 split gate shapes")
        
        # Check GRU (3 gates: r, z, n)
        gru = self.layer_map.get("GRU")
        if gru:
            self.assertEqual(len(gru['gate_shapes']), 3, "GRU should have 3 split gate shapes")

if __name__ == "__main__":
    print("--- Running SOFIE GSoC Parser Validation Tests ---")
    unittest.main(verbosity=2)