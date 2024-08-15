// MyClass.cpp
#include <iostream>
#include "MyClass.h"

MyClass::MyClass(float value) : value(value) {}

void MyClass::printValue() {
    std::cout << "Value: " << value << std::endl;
}

void MyClass::incrementValue() {
    value++;
}

void MyClass::decreaseValue() {
    value--;
}
