#include <iostream>

class Animal {
public:
    void eat() {
        std::cout << "Eating..." << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Barking..." << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat(); // Inherited function
    myDog.bark(); // Derived class function

    return 0;
}