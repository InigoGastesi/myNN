#ifndef _NEURON_H
#define _NEURON_H

#include "matrix.hpp"

class neuron {
   private:
    matrix* weights;
    float u;

   public:
    neuron(int numberOfInputs);
    /**
     * @brief multiplica los inputs por la matriz de pesos
     * @param input
     * @return float result o NULL si no se puede calcular
     */
    float calculate(matrix* input);
};

#endif