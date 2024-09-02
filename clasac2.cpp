#include <iostream>

class Base {
private:
    int privateVar;

public:
    // Constructor to initialize privateVar
    Base(int value) : privateVar(value) {}

    // Public function to access privateVar
    int getPrivateVar() const {
        return privateVar;
    }

    // Friend function to access privateVar
    friend void printPrivateVar(const Base& b);
};

// Friend function definition
void printPrivateVar(const Base& b) {
    std::cout << "PrivateVar (via friend function): " << b.privateVar << std::endl;
}

int main() {
    Base b(42);

    // Direct access would be invalid
    // std::cout << b.privateVar << std::endl; // Invalid, will cause a compiler error

    // Use a public function to print
    std::cout << "PrivateVar (via public getter): " << b.getPrivateVar() << std::endl;

    // Use the friend function to print
    printPrivateVar(b);

    return 0;
}
