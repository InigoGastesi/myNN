#include <iostream>

#include "layer.hpp"
#include "matrix.hpp"
#include "neuron.hpp"

int main(int argc, char const* argv[]) {
    layer* l = new layer(2, 2);
    double data[2] = {2, 1};
    matrix* m = new matrix(1, 2, data);
    l->calculate(m)->printMatrix();

    return 0;
}
