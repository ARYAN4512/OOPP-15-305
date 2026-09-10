//Implement a program to demonstrate inline functions, default arguments, and function overloading for performing arithmetic operations. 
#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b, int c = 1) { 
    return a * b * c;
}

int main() {
    cout << "Addition: " << add(5, 3) << endl;
    cout << "Multiplication: " << multiply(2, 3) << endl;
    cout << "Multiplication with default argument: " << multiply(2, 3, 4) << endl;
    return 0;
}