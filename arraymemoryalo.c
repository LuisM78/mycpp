#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5; // Size of the array
    int *arr; // Pointer to hold the base address of the array

    // Allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));

    // Check if the memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Return with error code
    }

    // Initialize the array with values
    for (int i = 0; i < n; i++) {
        arr[i] = i * 10; // Example initialization
    }

    // Print the array elements
    printf("Array elements: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0; // Return success code
}

/*
Explanation:

1. **Variable Declarations**:
   - `int n = 5;`: Declares an integer variable `n` and initializes it to 5, representing the size of the array.
   - `int *arr;`: Declares a pointer to an integer `arr`, which will hold the base address of the dynamically allocated array.

2. **Memory Allocation**:
   - `arr = (int *)malloc(n * sizeof(int));`: Allocates memory for `n` integers using `malloc`. The `sizeof(int)` ensures that the right amount of memory is allocated based on the size of an integer. The cast to `(int *)` converts the returned `void *` pointer from `malloc` to an `int *`.

3. **Check for Successful Allocation**:
   - The `if (arr == NULL)` statement checks if `malloc` returned `NULL`, which indicates a failure to allocate memory. If this happens, a message is printed and the program returns with an error code `1`.

4. **Initialize the Array**:
   - The `for` loop initializes the array elements with values. Here, each element is set to `i * 10`.

5. **Print the Array Elements**:
   - Another `for` loop is used to print the array elements.

6. **Free the Allocated Memory**:
   - `free(arr);`: Frees the memory that was allocated with `malloc`. This is crucial to avoid memory leaks.

7. **Return Success Code**:
   - `return 0;`: The program returns with a success code `0`.

This example demonstrates basic dynamic memory allocation, initialization, and deallocation for an array in C.
*/
