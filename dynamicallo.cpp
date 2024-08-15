#include <iostream>

int main() {
    int size;
    
    // Prompt user to enter the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    
    // Dynamically allocate an array of integers
    int* arrayPtr = new int[size];
    
    // Initialize the array with values
    for (int i = 0; i < size; ++i) {
        arrayPtr[i] = i * 10; // Assign values (0, 10, 20, ..., 10 * (size-1))
    }
    
    // Output the values of the array
    std::cout << "Dynamic Array values: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arrayPtr[i] << " ";
    }
    std::cout << std::endl;
    
    // Free the dynamically allocated memory
    delete[] arrayPtr;
    arrayPtr = nullptr; // Set the pointer to nullptr to avoid dangling pointer
    
    return 0;
}
