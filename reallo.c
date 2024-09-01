#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    // Get the number of elements for the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));

    // Check if the memory has been successfully allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    } else {
        printf("Memory successfully allocated using malloc.\n");

        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
        printf("\n");

        // Reallocate memory using realloc()
        n = n * 2;
        ptr = (int*)realloc(ptr, n * sizeof(int));

        if (ptr == NULL) {
            printf("Memory reallocation failed.\n");
            exit(0);
        } else {
            printf("Memory successfully reallocated using realloc.\n");

            // Get the new elements of the array
            for (i = n / 2; i < n; ++i) {
                ptr[i] = i + 1;
            }

            // Print the new elements of the array
            printf("The elements of the array after reallocation are: ");
            for (i = 0; i < n; ++i) {
                printf("%d, ", ptr[i]);
            }
            printf("\n");
        }

        // Free the allocated memory
        free(ptr);
        printf("Memory successfully freed.\n");
    }

    return 0;
}
