import numpy as np
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Conv1D, LSTM, Dense, Dropout

def train_cnn_lstm(X_train, y_train, X_test, y_test):
    
    # Reshape for CNN-LSTM (samples, timesteps, features)
    X_train = X_train.values.reshape((X_train.shape[0], X_train.shape[1], 1))
    X_test = X_test.values.reshape((X_test.shape[0], X_test.shape[1], 1))

    model = Sequential()

    # CNN Layer
    model.add(Conv1D(filters=64, kernel_size=2, activation='relu', input_shape=(X_train.shape[1],1)))
    
    # LSTM Layer
    model.add(LSTM(50))

    # Dense Layers
    model.add(Dense(32, activation='relu'))
    model.add(Dropout(0.3))
    model.add(Dense(4, activation='softmax'))  # 4 stages

    model.compile(loss='sparse_categorical_crossentropy', optimizer='adam', metrics=['accuracy'])

    model.fit(X_train, y_train, epochs=10, batch_size=16, verbose=1)

    loss, acc = model.evaluate(X_test, y_test)

    print("\nCNN-LSTM Accuracy:", acc)

    return model, acc