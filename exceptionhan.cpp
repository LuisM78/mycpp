#include <iostream>
#include <stdexcept> // For standard exception classes

int divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero!"); // Throwing an exception
    }
    return a / b;
}

int main() {
    int num1 = 10;
    int num2 = 0;

    try {
        int result = divide(num1, num2);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl; // Catching and handling the exception
    }

    return 0;
}
