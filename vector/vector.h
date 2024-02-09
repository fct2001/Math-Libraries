#ifndef VECTOR_H
#define VECTOR_H

#include <vector>

class Vector {
    private:
        std :: vector<double> elements;
    public:
        Vector(std :: vector<double> a = {});
        void printVector(void);
        Vector operator+(Vector);
        Vector operator-(Vector);
        double operator*(Vector);
        Vector operator*(double);
        Vector operator/(double);
};

#endif