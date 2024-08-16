#include <stdio.h>
#include <string.h>

// Function to find the longest non-repeated substring
void longestNonRepeatedSubstring(char* str, int* start, int* maxLength) {
    int n = strlen(str);
    int currentStart = 0;  // Current start index of the substring
    int currentLength = 0; // Length of the current substring
    int charIndex[256];    // Array to store the last index of characters
    
    // Initialize the character index array to -1
    for (int i = 0; i < 256; i++) {
        charIndex[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        // If the character was seen before, move the start index
        if (charIndex[(unsigned char)str[i]] >= currentStart) {
            currentStart = charIndex[(unsigned char)str[i]] + 1;
        }

        // Update the last seen index of the character
        charIndex[(unsigned char)str[i]] = i;
        
        // Update the current length of the substring
        currentLength = i - currentStart + 1;

        // Update the maximum length and start index if necessary
        if (currentLength > *maxLength) {
            *maxLength = currentLength;
            *start = currentStart;
        }
    }
}

int main() {
    char str[] = "abcabcbb";
    int start = 0;
    int maxLength = 0;

    longestNonRepeatedSubstring(str, &start, &maxLength);

    printf("Longest non-repeated substring: ");
    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\nLength: %d\n", maxLength);

    return 0;
}

