#include <iostream>

#include "matrix.hpp"
#include "neuron.hpp"

int main(int argc, char const* argv[]) {
    neuron* n = new neuron(2);
    float data[2] = {1, 2};
    matrix* mat1 = new matrix(1, 2, data);
    std::cout << n->calculate(mat1) << std::endl;

    return 0;
}
