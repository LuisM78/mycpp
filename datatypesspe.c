#include <stdio.h>

int main() {
    // Integer types
    int i = 42;
    unsigned int u = 42;
    long l = -1234567890L;
    unsigned long ul = 1234567890UL;
    short s = 32767;
    
    // Floating-point types
    float f = 3.14f;
    double d = 3.141592653589793;
    
    // Character type
    char c = 'A';
    
    // String type
    char str[] = "Hello, World!";
    
    // Printing various data types with format specifiers
    printf("Integer (int) specifier %%d: %d\n", i);
    printf("Unsigned Integer (unsigned int) specifier %%u: %u\n", u);
    printf("Long Integer (long) specifier %%ld: %ld\n", l);
    printf("Unsigned Long Integer (unsigned long) specifier %%lu: %lu\n", ul);
    printf("Short Integer (short) specifier %%hd: %hd\n", s);
    
    printf("Float (float) specifier %%f: %f\n", f);
    printf("Double (double) specifier %%lf: %lf\n", d);
    
    printf("Character (char) specifier %%c: %c\n", c);
    printf("String (char[]) specicfier %%s: %s\n", str);
    
    return 0;
}
