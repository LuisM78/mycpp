#include <stdio.h>

int main() {
    int var = 20;      // Declare an integer variable and initialize it to 20
    int* ptr = &var;   // Declare a pointer to int and assign it the address of var

    // Print the value of var
    printf("Value of var: %d\n", var);

    // Print the value stored at the address pointed to by ptr (should be the same as var)
    printf("Value pointed to by *ptr: %d\n", *ptr);
    printf("Address of ptr: %p\n", (void*)ptr);

    // Print the value referred to by the "reference" (using pointer here)
    printf("Value referred to by ptr: %d\n", *ptr);

    // Modify the value of var using ptr
    *ptr = 30;
    printf("New value of var (modified through ptr): %d\n", var);

    // Modify the value of var directly (simulating reference behavior)
    var = 40;
    printf("New value of var (modified directly): %d\n", var);
    printf("Address of ptr: %p\n", (void*)ptr);

    return 0;
}
 