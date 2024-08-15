// main.cpp
#include <iostream>
#include "functions.h"
#include "MyClass.h"

int main() {
    // Using functions from functions.cpp
    printHello();
    float result = add(5.4, 3.9);
    std::cout << "The sum is: " << result << std::endl;
    float result2 = multiply(45.3,3.8);
    std::cout << "The mult is: " << result2 << std::endl;

    // Using MyClass
    MyClass myObject(10.99);
    myObject.printValue();
    myObject.incrementValue();
    myObject.printValue();
    std::cout << "The decreased value is: " <<  std::endl;
    myObject.decreaseValue();
    myObject.printValue();
    std::cout << "Declearing new object of value 20 " <<  std::endl;
    MyClass myObject2(20.97);
    myObject2.printValue();
    myObject2.incrementValue();
    myObject2.printValue();

    return 0;
}
