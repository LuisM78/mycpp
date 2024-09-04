#include <iostream>

float multiply(float a,float b){

    return(a*b);
}

int main(){
    int a = 10;
    float b;
    b = static_cast <float> (a);
    int c ;
    c = static_cast<int>(b);
    float d =  104.399071243;


    std::cout << "the value of a is " << a << std::endl;
    std::cout << "the value of c is " << c << std::endl;
    std::cout << "the value of multiply a*c is " << multiply(a,b) << std::endl;
    std::cout << "the value of multiply a*d is " << multiply(a,d) << std::endl;
    return 0;


}