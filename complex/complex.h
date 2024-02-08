#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
    private:
        double real, imaginary;
    public:
        Complex(double a = 0, double b = 0);
        void printNumber(void);
        Complex operator+(Complex);
        Complex operator-(Complex);
        Complex operator*(Complex);
        Complex operator/(Complex);
};

#endif