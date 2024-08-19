#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int)); // Allocate memory for an integer
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr = 100; // Assign a value to the allocated memory
    printf("Value of dynamically allocated int: %d\n", *ptr);
    printf("don't forget to free the memoery with free(ptr)");
    free(ptr); // Free the allocated memory

    return 0;
}
