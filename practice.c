#include <stdio.h>

float multiply(float a, float b){
    return a*b;

}


int main() {

    int a = 10;
    int b = 20;
    float x = 1000.194;
    float y = 49.0893;
    

    printf("The value of a is %d and the value of b is %d, adn the sum is %d \n",a,b,a+b);

    float re,re2;
    re = multiply(a,b);
    printf("Mult a*b is %f \n",re);
    re2 = multiply(x,y);
    printf("Multip, x %f and y %f is, %f \n",x,y,re2);

    return 0;

}