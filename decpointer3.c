#include <stdio.h>

int main(){

    int a = 10;
    int *ap = &a;
    printf("the value of a is %d\n",a);
    printf("The address of the pointer is %p\n", ap);
    printf("the value of the pointer is %d\n",*ap);
    return 0;

}