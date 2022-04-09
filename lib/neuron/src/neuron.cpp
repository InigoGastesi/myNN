#include "../include/neuron.hpp"

#include <math.h>
#include <stdlib.h>

#include <iostream>

neuron::neuron(int numberOfInputs) {
    srand((unsigned)time(0));
    double* data = (double*)calloc(numberOfInputs, sizeof(double));
    for (int i = 0; i < numberOfInputs; i++) {
        data[i] =
            (double)rand() / (double)RAND_MAX;  // random number 0.0 to 1.0
    }
    this->weights = new matrix(numberOfInputs, 1, data);
    this->weights->printMatrix();
    this->u = (double)rand() / (double)RAND_MAX;
}

double neuron::calculate(matrix* input) {
    matrix* resultMatrix = dot(input, this->weights);
    if (resultMatrix == nullptr) {
        return NULL;
    } else {
        double result = resultMatrix->getData(0, 0);
        delete resultMatrix;
        // result = (double)(1 / (1 + exp(result)));
        return result;
    }
}