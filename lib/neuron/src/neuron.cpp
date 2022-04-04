#include "../include/neuron.hpp"

#include <math.h>
#include <stdlib.h>

#include <iostream>

neuron::neuron(int numberOfInputs) {
    // float* data = (float*)calloc(numberOfInputs, sizeof(float));
    // for (int i = 0; i < numberOfInputs; i++) {
    //     data[i] = static_cast<float>(rand()) /
    //               static_cast<float>(RAND_MAX);  // random number 0.0 to 1.0
    // }
    float data[2] = {1, 2};
    this->weights = new matrix(numberOfInputs, 1, data);
    this->u = static_cast<float>(rand()) / static_cast<float>(RAND_MAX);
}

float neuron::calculate(matrix* input) {
    matrix* resultMatrix = dot(input, this->weights);
    if (resultMatrix == nullptr) {
        return NULL;
    } else {
        float result = resultMatrix->getData(0, 0);
        delete resultMatrix;
        // result = (float)(1 / (1 + exp(result)));
        return result;
    }
}