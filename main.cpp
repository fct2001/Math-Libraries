#include <iostream>
#include "complex/complex.h"

using namespace std;

int main() {
    Complex A(1, 2), B(0, 0);
    (A / 2).printNumber();
    return 0;
}