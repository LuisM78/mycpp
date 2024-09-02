#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("nonexistent.txt");

    if (!file) { // Check if the file opened successfully
        std::cerr << "File could not be opened!" << std::endl;
        return 1;
    }

    // Further file processing...
    return 0;
}
