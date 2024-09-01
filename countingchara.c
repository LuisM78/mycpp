#include <stdio.h>

#define MAX_CHAR 256

void countCharacters(const char *str) {
    int charCount[MAX_CHAR] = {0}; // Initialize all counts to 0

    // Print initialization values
    // printf("Initial values of charCount:\n");
    // for (int i = 0; i < MAX_CHAR; i++) {
    //     printf("Index %d: %d\n", i, charCount[i]);
    // }

    // Count characters
    for (int i = 0; str[i] != '\0'; i++) {
        printf("char is %c \n",str[i]);
        printf("char with pointer deferencing %c \n",*(str + i));
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

void printpasschara(char c){
    printf(" inside print pass chara function... the passed value of char is %c \n",c);
}
int main() {
    const char *text = "a test hello world";
    char j = 'a';
    char b = 'z';

    printf("the value of the sring is ' %s ' \n", text);
    printf("the value of the sring is ' %c ' \n", *text);
    
    countCharacters(text);
    printf("char j is %c  should be letter a\n", j);
    printpasschara(j);
    printpasschara(b);
    
    return 0;
}
