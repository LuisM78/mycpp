#include <iostream>

int main() {
    // Define the size of the array
    const int size = 5;

    // Statically allocate an array of integers
    int array[size];

    // Initialize the array with values
    for (int i = 0; i < size; ++i) {
        array[i] = i * 10; // Assign values (0, 10, 20, 30, 40)
    }

    // Output the values of the array
    std::cout << "Static Array values: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // No need to free memory as it is automatically managed
    return 0;
}
