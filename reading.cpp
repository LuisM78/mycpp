#include <iostream>
#include <fstream> // Include fstream for file handling
#include <string>

int main() {
    std::ifstream inFile("example.txt"); // Create an input file stream
    std::string line;

    if (inFile.is_open()) { // Check if the file is open
        while (getline(inFile, line)) { // Read file line by line
            std::cout << line << std::endl; // Print each line to the console
        }
        inFile.close(); // Close the file
    } else {
        std::cerr << "Unable to open file for reading." << std::endl;
    }

    return 0;
}
 