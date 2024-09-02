#include <iostream>

// Function overloads
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    int intResult = multiply(4, 5);          // Calls int version
    double doubleResult = multiply(4.5, 5.5); // Calls double version

    std::cout << "Integer Result: " << intResult << std::endl;
    std::cout << "Double Result: " << doubleResult << std::endl;

    return 0;
}
