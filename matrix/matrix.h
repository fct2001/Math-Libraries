#ifndef MATRIX_H
#define MATRIX_H

#include "../vector/vector.h"

class Matrix {
    private:
        Vector elements;
        int n, m;
    public:
        Matrix(Vector, int, int);
        void printMatrix(void);
        Vector getRow(int);
        Vector getColumn(int);
        double getElement(int, int);
        Matrix operator+(Matrix);
        Matrix operator-(Matrix);
        Matrix operator*(Matrix);
        Matrix operator/(Matrix);
};

#endif