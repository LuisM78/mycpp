#include <iostream>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1) // Base case
        return 1;
    else
        return n * factorial(n - 1); // Recursive case
}

int main() {
    int num = 9;
    std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;
    return 0;
}
