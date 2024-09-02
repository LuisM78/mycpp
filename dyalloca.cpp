#include <iostream>

int main() {
    // Allocate memory for an integer
    int* ptr = new int;
    *ptr = 42; // Assign value
    std::cout << "Value: " << *ptr << std::endl;
    delete ptr; // Free the allocated memory

    // Allocate memory for an array of integers
    int* arr = new int[5];
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr; // Free the allocated memory for array

    return 0;
}

