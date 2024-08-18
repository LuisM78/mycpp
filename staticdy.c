#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Static (Stack) Memory Allocation
    int num = 10;                   // Static allocation of an integer
    float price = 9.99f;            // Static allocation of a float
    char message[50] = "Hello, world!"; // Static allocation of a string (character array)

    // Print the static memory allocations
    printf("Static integer: %d\n", num);
    printf("Static float: %.2f\n", price);
    printf("Static string: %s\n", message);

    // Dynamic (Heap) Memory Allocation
    // Allocate memory for a single integer
    int *numPtr = (int *)malloc(sizeof(int));
    if (numPtr == NULL) {
        perror("Failed to allocate memory for integer");
        return EXIT_FAILURE;
    }
    *numPtr = 42;                   // Assign a value to the allocated memory
    printf("Dynamically allocated integer: %d\n", *numPtr);
    free(numPtr);                   // Free the dynamically allocated memory

    // Allocate memory for a single float
    float *floatPtr = (float *)malloc(sizeof(float));
    if (floatPtr == NULL) {
        perror("Failed to allocate memory for float");
        return EXIT_FAILURE;
    }
    *floatPtr = 3.14f;              // Assign a value to the allocated memory
    printf("Dynamically allocated float: %.2f\n", *floatPtr);
    free(floatPtr);                // Free the dynamically allocated memory

    // Allocate memory for a string (character array)
    char *str = (char *)malloc(100 * sizeof(char)); // Allocating space for 100 characters
    if (str == NULL) {
        perror("Failed to allocate memory for string");
        return EXIT_FAILURE;
    }
    strcpy(str, "Dynamic string"); // Copy a string into the allocated memory
    printf("Dynamically allocated string: %s\n", str);
    free(str);                     // Free the dynamically allocated memory
    printf("Freed the str memory with free(str) \n");
    // Allocate memory for an array of integers
    int *arr = (int *)malloc(5 * sizeof(int)); // Allocating space for an array of 5 integers
    if (arr == NULL) {
        perror("Failed to allocate memory for array");
        return EXIT_FAILURE;
    }
    // Initialize and print the array
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
    }
    for (int i = 0; i < 5; i++) {
        printf("Array element %d: %d\n", i, arr[i]);
    }
    free(arr); // Free the dynamically allocated memory for the array
     
    printf("Freed the arr memory with free(arr)\n");

    return EXIT_SUCCESS;
}

/*
Explanation of the Code:

1. Static (Stack) Memory Allocation:
   - `int num = 10;` allocates memory for an integer `num` on the stack.
   - `float price = 9.99f;` allocates memory for a float `price` on the stack.
   - `char message[50] = "Hello, world!";` allocates memory for a character array `message` on the stack.
   - The values are directly accessed and printed.

2. Dynamic (Heap) Memory Allocation:
   - `int *numPtr = (int *)malloc(sizeof(int));` allocates memory for an integer on the heap.
     - If allocation fails, an error message is printed, and the program exits.
     - The allocated memory is accessed via the pointer `numPtr`, assigned a value, printed, and then freed.
   - `float *floatPtr = (float *)malloc(sizeof(float));` allocates memory for a float on the heap.
     - Similar to the integer allocation, memory is accessed, assigned a value, printed, and freed.
   - `char *str = (char *)malloc(100 * sizeof(char));` allocates memory for a string (character array) on the heap.
     - Memory is allocated for 100 characters, a string is copied into this memory, and the string is printed.
     - The memory is then freed.
   - `int *arr = (int *)malloc(5 * sizeof(int));` allocates memory for an array of 5 integers on the heap.
     - Memory is initialized with values, printed, and then freed.

In summary, static allocation is used when the size of the memory is known at compile time, while dynamic allocation is used when the size needs to be determined at runtime. Dynamic memory must be managed manually with `malloc` and `free` to avoid memory leaks and undefined behavior.
*/
