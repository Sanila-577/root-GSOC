import ROOT

# Verify the SOFIE module is loaded
print("ROOT loaded successfully.")
print("Checking for SOFIE:", hasattr(ROOT.TMVA.Experimental, "SOFIE"))

# Exercise 3: Playing with the Python-side parsers
# The PyKeras parser natively supports loading straight from Python
print("\n--- Keras Parser ---")
try:
    print(dir(ROOT.TMVA.Experimental.SOFIE.PyKeras))
except AttributeError:
    print("PyKeras parser not linked.")

# The PyTorch parser currently relies on a C++ interface, which you will be extending
print("\n--- PyTorch Parser ---")
try:
    print(dir(ROOT.TMVA.Experimental.SOFIE.PyTorch))
except AttributeError:
    print("PyTorch parser not linked.")