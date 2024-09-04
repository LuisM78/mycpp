#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    struct timespec start, end;
    double elapsedTime;

    // Get the starting time
    clock_gettime(CLOCK_MONOTONIC, &start);

    // Code you want to measure goes here
    printf("Sleeping for 10 seconds...\n");
    sleep(10); // Sleep for 10 seconds

    // Get the ending time
    clock_gettime(CLOCK_MONOTONIC, &end);

    // Calculate the elapsed time in seconds
    elapsedTime = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;

    printf("Awake now!\n");
    printf("The code took %f seconds to execute.\n", elapsedTime);

    return 0;
}
