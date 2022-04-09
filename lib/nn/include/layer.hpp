#ifndef _LAYER_H
#define _LAYER_H

#include <vector>

#include "matrix.hpp"
#include "neuron.hpp"

class layer {
   private:
    std::vector<neuron*> neurons;

   public:
    layer(int numberOfNeurons, int numberOfInputs);
    ~layer();
    matrix* calculate(matrix* input);
};

#endif