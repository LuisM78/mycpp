#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Allocate memory for an integer
    int *intPtr = (int *)malloc(sizeof(int));
    if (intPtr == NULL) {
        perror("Failed to allocate memory for int");
        return EXIT_FAILURE;
    }

    // Assign a value to the integer and print it
    *intPtr = 42;
    printf("Integer value: %d\n", *intPtr);

    // Free the memory allocated for the integer
    free(intPtr);

    // Allocate memory for a float
    float *floatPtr = (float *)malloc(sizeof(float));
    if (floatPtr == NULL) {
        perror("Failed to allocate memory for float");
        return EXIT_FAILURE;
    }

    // Assign a value to the float and print it
    *floatPtr = 3.14f;
    printf("Float value: %.2f\n", *floatPtr);

    // Free the memory allocated for the float
    free(floatPtr);

    // Allocate memory for a string (character array)
    char *str = (char *)malloc(100 * sizeof(char)); // Allocating space for 100 characters
    if (str == NULL) {
        perror("Failed to allocate memory for string");
        return EXIT_FAILURE;
    }

    // Copy a string into the allocated memory and print it
    strcpy(str, "Hello, world!");
    printf("String value: %s\n", str);

    // Free the memory allocated for the string
    free(str);

    return EXIT_SUCCESS;
}
