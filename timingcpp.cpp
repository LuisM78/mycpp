#include <stdio.h>
#include <time.h>

void exampleFunction() {
    // Simulate a function that takes some time to execute
    for (int i = 0; i < 40000000; i++) {
        // Do some work
    }
}

int main() {
    clock_t start, end;
    double cpu_time_used;

    start = clock(); // Start the clock

    // Call the function you want to time
    exampleFunction();

    end = clock(); // Stop the clock

    // Calculate the elapsed time in seconds
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("exampleFunction() took %f seconds to execute.\n", cpu_time_used);

    return 0;
}
