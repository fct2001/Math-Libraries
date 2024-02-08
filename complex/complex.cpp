#include "complex.h"
#include <cmath>
#include <iostream>
#include <iomanip>

Complex :: Complex(double a, double b) {
    real = a;
    imaginary = b;
}

void Complex :: printNumber(void) {
    if(real < 0) std :: cout << "- ";
    else std :: cout << "+ ";

    std :: cout << std :: setprecision(3) << std :: fixed << fabs(real) << "";

    if(imaginary < 0) std :: cout << " - ";
    else std :: cout << " + ";

    std :: cout << fabs(imaginary) << "i";
}

Complex Complex :: operator+(Complex number) {
    double a = real, b = imaginary;
    double c = number.real, d = number.imaginary;
    return Complex(a + c, b + d);
}

Complex Complex :: operator-(Complex number) {
    double a = real, b = imaginary;
    double c = number.real, d = number.imaginary;
    return Complex(a - c, b - d);
}

Complex Complex :: operator*(Complex number) {
    double a = real, b = imaginary;
    double c = number.real, d = number.imaginary;
    return Complex(a * c - b * d, a * d + b * c);
}

Complex Complex :: operator/(Complex number) {
    double a = real, b = imaginary;
    double c = number.real, d = number.imaginary;
    double denominator = c * c + d * d;
    return Complex((a * c + b * d) / denominator, (b * c - a * d) / denominator);
}