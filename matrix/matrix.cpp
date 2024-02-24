#include "matrix.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

Matrix :: Matrix(Vector vector, int rows, int columns) {
    elements = vector;
    if(vector.getSize() != rows * columns) {
        n = elements.getSize();
        m = 1;
    }
    else {
        n = rows;
        m = columns;
    }
}

void Matrix :: printMatrix(void) {
    for(int i = 0; i < n; i++) {
        std :: cout << "|";
        for(int j = 0; j < m; j++) {
            if(elements[n * i + j] < 0) std :: cout << "-";
            else std :: cout << "+";
            std :: cout << std :: setprecision(3) << std :: fixed << fabs(elements[n * i + j]);
            if(j < m - 1) std :: cout << " ";
        }
        std :: cout << "|" << std :: endl;
    }
}

Vector Matrix :: getRow(int row) {
    std :: vector<double> rowElements;
    for(int j = 0; j < m; j++) {
        rowElements.push_back(elements[n * row + j]);
    }
    return Vector(rowElements);
}

Vector Matrix :: getColumn(int column) {
    std :: vector<double> columnElements;
    for(int i = 0; i < n; i++) {
        columnElements.push_back(elements[n * i + column]);
    }
    return Vector(columnElements);
}

double Matrix :: getElement(int row, int column) {
    return elements[n * row + column];
}

Matrix Matrix :: operator+(Matrix matrix) {
    std :: vector<double> newElements;
    if(n == matrix.n && m == matrix.m) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                newElements.push_back(getElement(i, j) + matrix.getElement(i, j));
            }
        }
    }
    return Matrix(Vector(newElements), n, m);
}

Matrix Matrix :: operator-(Matrix matrix) {
    std :: vector<double> newElements;
    if(n == matrix.n && m == matrix.m) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                newElements.push_back(getElement(i, j) - matrix.getElement(i, j));
            }
        }
    }
    return Matrix(Vector(newElements), n, m);
}

Matrix Matrix :: operator*(Matrix matrix) {
    double newElement;
    Vector rowVector, columnVector;
    std :: vector<double> newElements;
    if(m != matrix.n) return Matrix(Vector(), 0, 0);
    else {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < matrix.m; j++) {
                rowVector = getRow(i);
                columnVector = matrix.getColumn(j);
                newElement = rowVector * columnVector;
                newElements.push_back(newElement);
            }
        }
        return Matrix(Vector(newElements), n, matrix.m);
    }
}

Matrix Matrix :: operator/(Matrix matrix) {

}