#include <iostream>
#include <fstream> // Include fstream for file handling

int main() {
    std::ofstream outFile("example.txt"); // Create an output file stream

    if (outFile.is_open()) { // Check if the file is open
        outFile << "Hello, world!" << std::endl; // Write to the file
        outFile << "This is a file handling example." << std::endl;
        outFile.close(); // Close the file
        std::cout << "Data written to file successfully." << std::endl;
    } else {
        std::cerr << "Unable to open file for writing." << std::endl;
    }

    return 0;
}