#include <stdio.h>
#include <windows.h>

int main() {
    LARGE_INTEGER frequency;        // Stores the ticks per second
    LARGE_INTEGER start, end;       // Stores the start and end ticks
    double elapsedTime;

    // Get the frequency of the performance counter
    QueryPerformanceFrequency(&frequency);

    // Get the starting tick count
    QueryPerformanceCounter(&start);

    // Code you want to measure goes here
    printf("Sleeping for 10 seconds...\n");
    Sleep(10000); // Sleep for 10 seconds

    // Get the ending tick count
    QueryPerformanceCounter(&end);

    // Calculate the elapsed time in seconds
    elapsedTime = (double)(end.QuadPart - start.QuadPart) / frequency.QuadPart;

    printf("Awake now!\n");
    printf("The code took %f seconds to execute.\n", elapsedTime);

    return 0;
}
