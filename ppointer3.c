#include <stdio.h>

int main(){ 
    int i =5;
    int* ai = &i;
    printf("ai is pointing to %d \n",*ai);
    printf("the value of i is %d \n", i);
    printf("the address of i is %p \n", (void*)ai);
    printf("the address of i is %p \n", ai);
    printf("ai is pointing to %d \n",*ai);
    *ai = 20;
    printf("the value of i after using *ai=20 is %d \n", i); 
    i = 16;
    printf("ai is pointing to %d \n",*ai);

    return 0;


}