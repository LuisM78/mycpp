#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>


int main() {
    int integerInput;
    double doubleInput;
    char stringInput[256];

    // Reading an integer
    printf("Enter an integer: ");
    scanf("%d", &integerInput);

    // Reading a floating-point number
    printf("Enter a floating-point number (ccode): ");
    scanf("%lf", &doubleInput);

    // Clearing the input buffer before reading a string
    while (getchar() != '\n'); // Clear the newline character left by previous input

    // Reading a string (including spaces)
    printf("Enter a string: ");
    fgets(stringInput, sizeof(stringInput), stdin);
    
    // Remove trailing newline character from the string input, if it exists
    size_t len = strlen(stringInput);
    if (len > 0 && stringInput[len-1] == '\n') {
        stringInput[len-1] = '\0';
    }

    // Output the inputs
    printf("\nYou entered the integer: %d\n", integerInput);
    printf("You entered the floating-point number: %.2lf\n", doubleInput);
    printf("You entered the string: %s\n", stringInput);

    return 0;
}
