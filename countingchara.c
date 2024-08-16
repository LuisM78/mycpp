#include <stdio.h>

#define MAX_CHAR 256

void countCharacters(const char *str) {
    int charCount[MAX_CHAR] = {0}; // Initialize all counts to 0
    
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char index = (unsigned char)str[i]; // Cast to ensure proper indexing
        charCount[index]++;
    }
    
    for (int i = 0; i < MAX_CHAR; i++) {
        if (charCount[i] > 0) {
            printf("Character %c: %d times\n", (char)i, charCount[i]);
        }
    }
}

int main() {
    const char *text = "hello world";
    countCharacters(text);
    return 0;
}
