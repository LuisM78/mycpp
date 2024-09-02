#include <iostream>
#include <memory> // Include memory header for smart pointers

int main() {
    // Create a unique pointer
    std::unique_ptr<int> ptr = std::make_unique<int>(42);

    std::cout << "Value: " << *ptr << std::endl;

    // No need to call delete; unique_ptr automatically deallocates memory
    return 0;
}
