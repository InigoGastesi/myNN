#include <iostream>

#include "matrix.hpp"

int main(int argc, char const* argv[]) {
    float data[9] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f};
    matrix* mat1 = new matrix(3, 3, data);
    std::cout << mat1->getRows() << std::endl;
    float data2[3] = {1, 2, 3};
    matrix* mat2 = new matrix(3, 1, data2);
    matrix* result = dot(mat1, mat2);
    result->printMatrix();
    return 0;
}