// Implement a class MathOperations with overloaded functions multiply() that can handle:
// •	Two integers
// •	Two doubles
// •	Three integers
// Demonstrate the use of each overloaded function.

#include <iostream>

class MathOperations {
public:
    int multiply(int a, int b) {
        return a * b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    int multiply(int a, int b, int c) {
        return a * b * c;
    }
};

int main() {
    MathOperations mathOps;

    cout << "Multiply integers: " << mathOps.multiply(2, 3) << std::endl;
    cout << "Multiply doubles: " << mathOps.multiply(2.5, 4.0) << std::endl;
    cout << "Multiply three integers: " << mathOps.multiply(2, 3, 4) << std::endl;

    return 0;
}
