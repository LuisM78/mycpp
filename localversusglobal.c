#include <stdio.h>

// Global variables
int global_var = 100;
float global_float = 3.14f;

void display_global() {
    printf("Global int variable: %d\n", global_var);
    printf("Global float variable: %f\n", global_float);
    printf("Address of global int variable: %p\n", (void*)&global_var);
    printf("Address of global float variable: %p\n", (void*)&global_float);
}

void display_local() {
    // Local variables
    int local_var = 200;
    float local_float = 6.28f;
    
    printf("Local int variable: %d\n", local_var);
    printf("Local float variable: %f\n", local_float);
    printf("Address of local int variable: %p\n", (void*)&local_var);
    printf("Address of local float variable: %p\n", (void*)&local_float);
}

int main() {
    printf("Accessing global variables from main:\n");
    printf("Global int variable: %d\n", global_var);
    printf("Global float variable: %f\n", global_float);
    printf("Address of global int variable: %p\n", (void*)&global_var);
    printf("Address of global float variable: %p\n", (void*)&global_float);
    
    printf("\nAccessing global variables from a function:\n");
    display_global();
    
    printf("\nAccessing local variables from a function:\n");
    display_local();
    
    return 0;
}

/*
Explanation:

1. **Global Variables:**
   - Defined outside any function, accessible from any function.
   - Stored in the data segment of memory.
   - Lifetime: The entire duration of the program's execution.
   - Example: `int global_var = 100;`

2. **Local Variables:**
   - Defined within a function, accessible only within that function.
   - Stored in the stack segment of memory.
   - Lifetime: Only while the function is executing.
   - Example: `int local_var = 200;` (defined within `display_local()` function)

3. **Memory Segments:**
   - **Data Segment:** Holds global and static variables.
   - **Stack Segment:** Holds local variables, function parameters, and return addresses.

4. **Scope:**
   - **Global Variables:** Program-wide scope.
   - **Local Variables:** Function-level scope.

5. **Address Format:**
   - Using `%p` to print pointer addresses, and casting to `(void*)` to match the format specifier.

In this example:
- `global_var` and `global_float` are global variables accessible from `main()` and `display_global()`.
- `local_var` and `local_float` are local variables only accessible within `display_local()`.
- The addresses of global variables are consistent throughout the program.
- The addresses of local variables change with each function call, as they are allocated on the stack.

*/
