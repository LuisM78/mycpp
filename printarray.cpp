#include <iostream>

int main() {
    // Create an array of 20 integers
    int arr[20];

    // Initialize the array with some values (e.g., 0 to 19)
    for (int i = 0; i < 20; ++i) {
        arr[i] = i*9;
    }

    // Loop through the array and print the content
    for (int i = 0; i < 20; ++i) {
        std::cout << "Element at index " << i << ": " << arr[i] << std::endl;
    }

    return 0;
}
