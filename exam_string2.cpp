#include <iostream>
#include <sstream> // Required for std::stringstream
#include <string>

int main() {
    int age = 30;
    std::string name = "Alice";

    // Create a stringstream object
    std::stringstream ss;

    // Format the string
    ss << "Name: " << name << ", Age: " << age;

    // Get the formatted string
    std::string formattedString = ss.str();

    // Output the result
    std::cout << formattedString << std::endl;

    return 0;
}
