#include "vector.h"
#include <iostream>
#include <iomanip>

Vector :: Vector(std :: vector<double> a) {
    elements = a;
}

void Vector :: printVector(void) {
    std :: cout << "[";
    for(int i = 0; i < elements.size(); i++) {
        std :: cout << std :: setprecision(3) << std :: fixed << elements[i];
        if(i < elements.size() - 1) std :: cout << " ";
    }
    std :: cout << "]";
}

Vector Vector :: operator+(Vector vector) {
    std :: vector<double> newElements;
    if(elements.size() > vector.elements.size()) {
        for(int i = 0; i < elements.size(); i++) {
            if(i >= vector.elements.size()) newElements.push_back(elements[i]);
            else newElements.push_back(elements[i] + vector.elements[i]);
        }
    }
    else {
        for(int i = 0; i < vector.elements.size(); i++) {
            if(i >= elements.size()) newElements.push_back(vector.elements[i]);
            else newElements.push_back(elements[i] + vector.elements[i]);
        }
    }
    return Vector(newElements);
}

Vector Vector :: operator-(Vector vector) {
    return *this + (vector * -1);
}

double Vector :: operator*(Vector vector) {
    double sum = 0;
    for(int i = 0; i < elements.size(); i++) {
        sum += elements[i] * vector.elements[i];
    }
    return sum;
}

Vector Vector :: operator*(double number) {
    std :: vector<double> newElements;
    for(int i = 0; i < elements.size(); i++) {
        newElements.push_back(elements[i] * number);
    }
    return Vector(newElements);
}

Vector Vector :: operator/(double number) {
    return *this * (1 / number);
}