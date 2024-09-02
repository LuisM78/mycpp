#include <iostream>
#include <string> // Required for std::string

int main() {
    // Declare and initialize strings
    std::string firstName = "John";
    std::string lastName = "Doe";

    // Concatenate strings
    std::string fullName = firstName + "    " + lastName;

    // Output the result
    std::cout << "Full Name: " << fullName << std::endl;

    return 0;
}
