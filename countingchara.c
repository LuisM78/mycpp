#include <stdio.h>

#define MAX_CHAR 256

void countCharacters(const char *str) {
    int charCount[MAX_CHAR] = {0}; // Initialize all counts to 0

    // Print initialization values
    printf("Initial values of charCount:\n");
    for (int i = 0; i < MAX_CHAR; i++) {
        printf("Index %d: %d\n", i, charCount[i]);
    }

    // Count characters
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char index = (unsigned char)str[i]; // Cast to ensure proper indexing
        charCount[index]++;
    }

    // Print counts after processing the string
    printf("\nCharacter counts:\n");
    for (int i = 0; i < MAX_CHAR; i++) {
        if (charCount[i] > 0) {
            printf("index %d, Character %c: %d times\n",i, (char)i, charCount[i]);
        }
    }
}

int main() {
    const char *text = "a test hello world";
    countCharacters(text);
    return 0;
}
