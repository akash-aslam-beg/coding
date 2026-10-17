# Tutorial study: Stephen Welch, Neural Networks Demystified (@stephencwelch).
import numpy as np
import pandas as pd
np.random.seed(7)
X = np.array([[3, 5], [5, 1], [10, 2]], dtype=float)
y = np.array([[75], [82], [93]], dtype=float) / 100
X = X / X.max(axis=0)

class Neural_Network(object):
    def __init__(self):        
        
        self.inputLayerSize = 2
        self.outputLayerSize = 1
        self.hiddenLayerSize = 3

        self.W1 = np.random.randn(self.inputLayerSize, self.hiddenLayerSize)
        self.W2 = np.random.randn(self.hiddenLayerSize, self.outputLayerSize)

    def forward(self, X):
        
        self.z2 = np.dot(X, self.W1)
        self.a2 = self.sigmoid(self.z2)
        self.z3 = np.dot(self.a2, self.W2)
        yHat = self.sigmoid(self.z3) 
        return yHat

    def sigmoid(self, z):
        
        return 1/(1+np.exp(-z))
