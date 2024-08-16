#include <stdio.h>

int main() {
    // Print ASCII values and their corresponding characters for printable characters
    printf("Printable ASCII characters and their codes:\n");
    for (int i = 32; i <= 126; i++) { // Printable characters range from 32 to 126
        printf("Character: %c, ASCII Code: %d\n", (char)i, i);
    }

    // Print ASCII values for control characters (0-31) and extended ASCII (127-255)
    printf("\nControl and extended ASCII characters and their codes:\n");
    for (int i = 0; i < 32; i++) { // Control characters range from 0 to 31
        printf("Character: %c, ASCII Code: %d\n", (char)i, i);
    }

    // Extended ASCII characters (127-255)
    for (int i = 127; i < 256; i++) {
        printf("Character: %c, ASCII Code: %d\n", (char)i, i);
    }

    return 0;
}
