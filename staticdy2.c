#include <stdio.h>

int main(){
    // this is statically stack mem allocation
    int  i ;
    i = 10;
    printf("i is %d \n", i);

    float myf = 89.89;
    printf("myfl is %0.2f\n", myf );

    char mychar[50] = "Hello world!";
    printf("mychar is %s \n",mychar);

    return 0;

}