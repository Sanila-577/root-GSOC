import ROOT
import os
import sys

def run_parser():
    input_model = "gsoc_sofie_test.h5"
    output_header = "model_output.h"

    if not os.path.exists(input_model):
        print(f"Error: {input_model} not found! Run create_model.py first.")
        sys.exit(1)

    print(f"Starting TMVA SOFIE Parser for {input_model}...")
    
    try:
        # This calls the SOFIE Keras parser
        # It will use the Python logic you are modifying in 
        # TMVA/Experimental/SOFIE/PyKeras.py
        ROOT.TMVA.Experimental.SOFIE.PyKeras.Parse(input_model, output_header)
        
        if os.path.exists(output_header):
            print(f"--- SUCCESS ---")
            print(f"Generated header file: {output_header}")
        else:
            print("Parser finished but no header file was created.")
            
    except Exception as e:
        print(f"FAILURE: An error occurred during parsing:\n{e}")

if __name__ == "__main__":
    run_parser()