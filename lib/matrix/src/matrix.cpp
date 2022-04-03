#include "../include/matrix.hpp"

#include <stdlib.h>

#include <iostream>

matrix::matrix(int rows, int columns, float* data) {
    this->rows = rows;
    this->columns = columns;
    this->data = data;
}

int matrix::getColumns() { return columns; }
int matrix::getRows() { return rows; }
float matrix::getData(int row, int column) {
    return data[row * columns + column];
}

void matrix::printMatrix() {
    std::cout << "(" << rows << "x" << columns << ")" << std::endl;
    for (int i = 0; i < rows * columns; i++) {
        std::cout << data[i] << "\t";
        if ((i + 1) % columns == 0) std::cout << std::endl;
    }
}

matrix* dot(matrix* mat1, matrix* mat2) {
    if (mat1->getColumns() != mat2->getRows()) {
        return nullptr;
    }

    int rows = mat1->getRows();
    int columns = mat2->getColumns();
    float* data = (float*)calloc(rows * columns, sizeof(float));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            for (int k = 0; k < rows; k++) {
                std::cout << mat1->getData(i, k) << " " << mat2->getData(k, i)
                          << std::endl;
                data[i * columns + j] +=
                    mat1->getData(i, k) * mat2->getData(k, j);
                std::cout << "data " << data[i * columns + j] << " k " << k
                          << std::endl;
            }
        }
    }
    matrix* result = new matrix(rows, columns, data);
    return result;
}