#include <iostream>

class Base {
public:
    int publicVar;
    int getPrivateVar() const {
        return privateVar;
    }

protected:
    int protectedVar;
private:
    int privateVar = 5;
};

class Derived : public Base {
public:
    void accessMembers() {
        publicVar = 1;      // Accessible
        protectedVar = 2;   // Accessible
        // privateVar = 3; // Not Accessible (compiler error)
    }
};

int main() {
    Base b;
    b.publicVar = 1;     // Accessible
    std::cout << " the b.publicVar is "<< b.publicVar << std::endl;
    std::cout <<  " the b.privateVar is "<< b.getPrivateVar() << std::endl;
    //b.protectedVar = 2; // Not Accessible (compiler error)
    // b.privateVar = 3;  // Not Accessible (compiler error)

    return 0;
}
