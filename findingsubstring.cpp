#include <iostream>
#include <sstream>
#include <string>

int main() {
    // Create a stringstream object
    std::stringstream ss;
    ss << "This is an example string in a stringstream object.";

    // Convert the stringstream to a string
    std::string str = ss.str();

    // Define the sequence of characters to find
    std::string sequence = "example";

    // Find the sequence in the string
    size_t pos = str.find(sequence);

    if (pos != std::string::npos) {
        std::cout << "Found '" << sequence << "' at position " << pos << "." << std::endl;
    } else {
        std::cout << "Sequence '" << sequence << "' not found." << std::endl;
    }

    return 0;
}
