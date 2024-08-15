#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <float1> <float2>\n", argv[0]);
        return 1;
    }

    // Convert arguments to floats
    float num1 = atof(argv[1]);
    float num2 = atof(argv[2]);

    // Multiply the numbers
    float result = num1 * num2;

    // Print the result to stdout
    printf("%f\n", result);

    return 0;  // Indicate that the program executed successfully
}
