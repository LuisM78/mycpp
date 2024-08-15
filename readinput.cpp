#include <iostream>
#include <string>
#include <limits> 

int main() {
    int integerInput;
    double doubleInput;
    std::string stringInput;

    // Reading an integer
    std::cout << "Enter an integer: ";
    std::cin >> integerInput;

    // Reading a floating-point number
    std::cout << "Enter a floating-point number: ";
    std::cin >> doubleInput;

    // Clearing the input buffer before reading a string
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Reading a string (including spaces)
    std::cout << "Enter a string: ";
    std::getline(std::cin, stringInput);

    // Output the inputs
    std::cout << "\nYou entered the integer: " << integerInput << std::endl;
    std::cout << "You entered the floating-point number: " << doubleInput << std::endl;
    std::cout << "You entered the string: " << stringInput << std::endl;

    return 0;
}
