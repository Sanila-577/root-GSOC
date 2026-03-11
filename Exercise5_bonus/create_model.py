import tensorflow as tf
from tensorflow.keras import layers, models

def build_model():
    print("Building Keras model with Conv2DTranspose and LSTM...")
    
    model = models.Sequential([
        # Start with a small image-like input
        layers.Input(shape=(14, 14, 1)), 
        
        # Conv2DTranspose: This is what you are implementing in SOFIE!
        layers.Conv2DTranspose(4, kernel_size=(3,3), strides=(2,2), padding='same'),
        
        # Reshape to feed into LSTM (28*28 = 784)
        layers.Reshape((784, 4)),
        
        # LSTM layer
        layers.LSTM(16),
        
        # Final Output
        layers.Dense(1)
    ])

    model.compile(optimizer='adam', loss='mse')
    
    # Save as legacy H5 format which SOFIE currently expects
    model_path = "gsoc_sofie_test.h5"
    model.save(model_path)
    print(f"Successfully saved Keras model to {model_path}")
    model.summary()

if __name__ == "__main__":
    build_model()