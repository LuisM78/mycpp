#include <iostream>
#include <exception>

// Custom exception class
class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "My custom exception occurred!";
    }
};

int main() {
    try {
        throw MyException(); // Throwing a custom exception
    } catch (const MyException& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl; // Handling the custom exception
    }

    return 0;
}
