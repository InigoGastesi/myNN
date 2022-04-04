#ifndef _MATRIX_H
#define _MATRIX_H

#include <vector>
class matrix {
   private:
    int rows;
    int columns;
    float* data;

   public:
    matrix(int rows, int columns, float* data);
    ~matrix();
    int getRows();
    int getColumns();
    float getData(int row, int column);
    void printMatrix();
};

/**
 * @brief multiplica dos matrices creando una nueva matriz result
 * @param mat1
 * @param mat2
 * @return matrix* result o nullptr si no se puede multiplicar
 */
matrix* dot(matrix* mat1, matrix* mat2);

#endif