#include <iostream>

// Function declaration
int add(int, int);

int main() {
    int result = add(5, 3); // Function invocation
    std::cout << "Result: " << result << std::endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}