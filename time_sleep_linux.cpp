#include <stdio.h>
#include <unistd.h>  // For sleep()
#include <time.h>    // For time()

int main() {
    time_t start, end;
    double elapsed_time;

    start = time(NULL); // Get the current calendar time

    printf("Sleeping for 10 seconds...\n");
    sleep(10); // Sleep for 10 seconds

    end = time(NULL); // Get the current calendar time after sleep

    elapsed_time = difftime(end, start); // Calculate the difference in seconds

    printf("Awake now!\n");
    printf("The sleep function took %.f seconds to execute.\n", elapsed_time);

    return 0;
}
