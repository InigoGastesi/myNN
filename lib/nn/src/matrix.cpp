#include "../include/matrix.hpp"

#include <stdlib.h>

#include <iostream>

matrix::matrix(int rows, int columns, double* data) {
    this->rows = rows;
    this->columns = columns;
    this->data = data;
}

matrix::~matrix() { free(this->data); }

int matrix::getColumns() { return columns; }
int matrix::getRows() { return rows; }
double matrix::getData(int row, int column) {
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
    double* data = (double*)calloc(rows * columns, sizeof(double));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            for (int k = 0; k < mat1->getColumns(); k++) {
                data[i * columns + j] +=
                    mat1->getData(i, k) * mat2->getData(k, j);
            }
        }
    }
    matrix* result = new matrix(rows, columns, data);
    return result;
}