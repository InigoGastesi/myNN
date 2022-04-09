#ifndef _NEURON_H
#define _NEURON_H

#include "matrix.hpp"

class neuron {
   private:
    matrix* weights;
    double u;

   public:
    neuron(int numberOfInputs);
    ~neuron();
    /**
     * @brief multiplica los inputs por la matriz de pesos
     * @param input
     * @return double result o NULL si no se puede calcular
     */
    double calculate(matrix* input);
};

#endif