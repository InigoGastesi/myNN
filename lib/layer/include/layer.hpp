#ifndef _LAYER_H
#define _LAYER_H

#include <vector>

#include "neuron.hpp"

class layer {
   private:
    std::vector<neuron> neurons;

   public:
    layer(int numberOfNeurons, int numberOfInputs);
};

#endif