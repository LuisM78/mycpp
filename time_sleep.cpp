#include <stdio.h>
#include <windows.h> // For Sleep()
#include <time.h>    // For clock()

int main() {
    clock_t start, end;
    double cpu_time_used;

    start = clock(); // Start the clock

    printf("Sleeping for 10 seconds...\n");
    Sleep(10000); // Sleep for 10 seconds (10000 milliseconds)

    end = clock(); // Stop the clock

    // Calculate the elapsed time in seconds
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Awake now!\n");
    printf("The Sleep function took %f seconds to execute.\n", cpu_time_used);

    return 0;
}
 
 