#include <stdio.h>

int main() {
    int var = 10;        // Declare an integer variable
    int *ptr = &var;     // Pointer to int
    int **pptr = &ptr;   // Pointer to pointer to int

    printf("Value of var: %d\n", var);
    printf("Value stored at address pointed to by ptr: %d\n", *ptr);
    printf("Value stored at address pointed to by pptr: %d\n", **pptr);

    return 0;
}
