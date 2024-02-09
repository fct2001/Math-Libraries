#include <iostream>
#include "complex/complex.h"

using namespace std;

int main() {
    Complex A(1, 2), B(0, 0);
    (A / 2).printNumber();
    cout << "Bom dia" << endl;
    return 0;
}