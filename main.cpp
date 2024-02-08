#include <iostream>
#include "complex/complex.h"

using namespace std;

int main() {
    Complex A(1, 2), B(3, 4);
    (A / B).printNumber();
    return 0;
}