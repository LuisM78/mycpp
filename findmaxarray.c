#include <stdio.h>

// Function to find the maximum element in an array
int find_max(int arr[], int size) {
    if (size <= 0) {
        printf("Array size must be greater than 0.\n");
        return -1; // Indicate an error condition
    }

    int max = arr[0]; // Assume the first element is the maximum

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    // Example array
    int arr[] = {12, 45, 7, 89, 23, 56};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Find the maximum element
    int max = find_max(arr, size);

    // Print the maximum element
    if (max != -1) { // Check if the maximum was found successfully
        printf("The maximum element in the array is %d\n", max);
    }

    return 0;
}
