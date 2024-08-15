#include <stdio.h>

int main() {
    int x = 10;       // Declare an integer variable x
    int *a;           // Declare a pointer to an integer

    a = &x;           // Initialize the pointer a to point to x

    printf("Value of x: %d\n", x);       // Print value of x
    printf("Address of x: %p\n", (void*)&x); // Print address of x
    printf("Pointer a: %p\n", (void*)a);    // Print address stored in pointer a
    printf("Value pointed to by a: %d\n", *a); // Print value at address stored in pointer a (which is the value of x)

    *a = 20;          // Modify the value at address stored in pointer a (which is x)

    printf("New value of x: %d\n", x);    // Print the modified value of x

    return 0;
}
