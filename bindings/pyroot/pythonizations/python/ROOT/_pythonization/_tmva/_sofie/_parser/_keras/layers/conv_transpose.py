def MakeKerasConvTranspose(layer_data):
    from ROOT.TMVA.Experimental import SOFIE
    
    attributes = layer_data["layerAttributes"]
    # ConvTranspose usually needs: strides, pads, dilations, output_padding
    strides = attributes.get("strides", [1, 1])
    # Keras 'padding' is a string ('valid' or 'same')
    # SOFIE needs explicit pixel values or the string attribute
    
    op = SOFIE.ROperator_ConvTranspose["float"](
        # Pass your extracted attributes here
    )
    return op