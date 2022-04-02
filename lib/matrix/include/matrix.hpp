#ifndef _MATRIX_H
#define _MATRIX_H

class matrix {
   private:
    int rows;
    int columns;
    float* data;

   public:
    matrix(int rows, int columns, float* data);
    int getRows();
    int getColumns();
    float getData(int row, int column);
    void printMatrix();
};

matrix* dot(matrix* mat1, matrix* mat2);

#endif