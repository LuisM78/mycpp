#include <stdio.h>

int main() {
    const char *arr[] = {"Hello", "World", "Pointers", "in", "C"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array of pointers:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %s\n", i, arr[i]);
    }

    return 0;
}
