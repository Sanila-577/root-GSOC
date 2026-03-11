def MakeKerasConvTranspose(layer_data):
    """
    Create a Keras-compatible Conv2DTranspose layer operation for SOFIE.
    """
    from ROOT.TMVA.Experimental import SOFIE

    fLayerDType = layer_data["layerDType"]
    inputs = layer_data["layerInput"]
    outputs = layer_data["layerOutput"]
    attributes = layer_data["layerAttributes"]
    weights = layer_data["layerWeight"]
    
    # 1. Spatial config
    strides = list(attributes.get("strides", [1, 1]))
    dilations = list(attributes.get("dilation_rate", [1, 1]))
    kernel_size = list(attributes.get("kernel_size", [1, 1]))
    
    # 2. Padding mapping
    keras_padding = attributes.get("padding", "valid").upper()
    auto_pad = "SAME_UPPER" if keras_padding == "SAME" else "VALID"
    
    # 3. Output padding (specific to Transpose)
    output_padding = list(attributes.get("output_padding", [0, 0])) if attributes.get("output_padding") else [0, 0]
    
    nameX = inputs[0]
    nameY = outputs[0]
    nameW = weights[0]
    nameB = weights[1] if len(weights) > 1 else ""

    if SOFIE.ConvertStringToType(fLayerDType) == SOFIE.ETensorType.FLOAT:
        op = SOFIE.ROperator_ConvTranspose["float"](
            auto_pad,
            dilations,
            1, # group
            kernel_size,
            output_padding,
            [], # output_shape
            [0, 0, 0, 0], # pads
            strides,
            nameX,
            nameW,
            nameB,
            nameY
        )
        return op
    else:
        raise RuntimeError("SOFIE ConvTranspose only supports float32.")