#include <stdio.h>

// Function to find the maximum value in an array
int findMax(int arr[], int size) {
    int max = arr[0]; // Assume the first element is the maximum
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if the current element is greater
        }
    }
    return max;
}

int main() {
    int arr[] = {3, 5, 7,500, 2, 8, -1, 4, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int max = findMax(arr, size);
    
    printf("The maximum value in the array is: %d\n", max);
    
    return 0;
}
