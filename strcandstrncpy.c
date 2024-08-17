#include <stdio.h>
#include <string.h>

int main() {
    // Using strcpy for copying strings
    char src[] = "Hello, world!";  // Source string
    char dest[50];                 // Destination buffer with enough space

    // Copying the entire source string to the destination buffer
    strcpy(dest, src);
    printf("Source (strcpy): %s\n", src);
    printf("Destination (strcpy): %s\n", dest);

    // Using strncpy for copying a limited number of characters
    char partialDest[50];          // Destination buffer for partial copy

    // Copying the first 5 characters from the source to the partialDest
    strncpy(partialDest, src, 5);
    partialDest[5] = '\0';         // Manually null-terminate the destination string
    printf("Source (strncpy): %s\n", src);
    printf("Destination (strncpy): %s\n", partialDest);

    return 0;
}

/*
Explanation of the Code:

1. `strcpy` Example:
   - `char src[] = "Hello, world!";` initializes the source string.
   - `char dest[50];` declares a destination buffer with sufficient space.
   - `strcpy(dest, src);` copies the entire source string, including the null terminator, into the destination buffer.
   - `printf` statements output the contents of the source and destination buffers.

2. `strncpy` Example:
   - `char partialDest[50];` declares a separate destination buffer for the partial copy.
   - `strncpy(partialDest, src, 5);` copies up to the first 5 characters from the source string to the partial destination buffer.
   - `partialDest[5] = '\0';` ensures that the destination buffer is null-terminated manually.
   - `printf` statements output the contents of the source and the partially copied destination buffer.

In summary:
- **`strcpy`:** Used for copying the entire string and automatically null-terminates the destination buffer.
- **`strncpy`:** Allows copying a specific number of characters from the source. Requires manual null-termination if the number of characters copied is less than the buffer size.

Both functions do not perform bounds checking, so ensure the destination buffer is appropriately sized to prevent buffer overflow. */
