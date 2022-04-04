#include "../include/layer.hpp"

layer::layer(int numberOfNeurons, int numberOfInputs) {
    for (int i = 0; i < numberOfNeurons; i++) {
        this->neurons.push_back(neuron(numberOfInputs));
    }
}