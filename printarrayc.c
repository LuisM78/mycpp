#include <stdio.h>

int main() {
    // Create an array of 20 integers
    int arr[20];

    // Initialize the array with some values (e.g., 0 to 19, multiplied by 9)
    for (int i = 0; i < 20; ++i) {
        arr[i] = i * 9;
    }

    // Loop through the array and print the content
    for (int i = 0; i < 20; ++i) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}
