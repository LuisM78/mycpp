#include <iostream>

class Base {
public:
    virtual void speak() {
        std::cout << "Base class speaking..." << std::endl;
    }
};

class Derived : public Base {
public:
    void speak() override { // Override base class function
        std::cout << "Derived class speaking..." << std::endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;

    basePtr->speak(); // Calls Derived's speak() due to polymorphism

    return 0;
}
