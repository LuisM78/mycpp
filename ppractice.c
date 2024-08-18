#include <stdio.h>

int main() {
    int ia = 250;   // Local variable
    int* ptr = &ia; // Local pointer

    printf("Value of ia: %d\n", ia);
    printf("Address of ptr: %p\n", (void*)ptr);
    printf("Value pointed to by *ptr: %d\n", *ptr);

    printf("Changing the value of ia with the pointer\n");
    *ptr = 1;
    printf("New value of ia: %d\n", ia);

    return 0;
}



/*
Explanation:

1. **Global Variables:**
   - Defined outside any function, they have a program-wide scope.
   - Stored in the data segment of memory.
   - Address format may appear different from local variables.

2. **Local Variables:**
   - Defined within a function, they have function scope.
   - Stored in the stack segment of memory.
   - Addresses usually shown in hexadecimal format with `0x` prefix.

3. **Memory Segments:**
   - **Data Segment:** Holds global and static variables.
   - **Stack Segment:** Holds local variables, function parameters, and return addresses.

4. **Format Specifiers:**
   - `%d`: Used to print integers.
   - `%p`: Used to print pointer addresses (cast to `void*`).

5. **Pointer Dereferencing:**
   - Using `*ptr` to access or modify the value at the address `ptr` is pointing to.
   - Changes to the value via the pointer are reflected in the original variable.

In the examples above:
- Global variables show addresses that might not have the `0x` prefix.
- Local variables show addresses typically with the `0x` prefix.
*/
