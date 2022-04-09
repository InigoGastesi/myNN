#include "../include/layer.hpp"

#include <stdlib.h>

#include <iostream>

#include "matrix.hpp"

layer::layer(int numberOfNeurons, int numberOfInputs) {
    for (int i = 0; i < numberOfNeurons; i++) {
        this->neurons.push_back(new neuron(numberOfInputs));
    }
}

layer::~layer() { delete &this->neurons; }

matrix* layer::calculate(matrix* input) {
    double* output = (double*)calloc(neurons.size(), sizeof(double));
    int index = 0;
    for (std::vector<neuron*>::iterator it = neurons.begin();
         it < neurons.end(); it++) {
        output[index] = (*it)->calculate(input);
        index++;
    }
    matrix* result = new matrix(1, (int)neurons.size(), output);
    return result;
}