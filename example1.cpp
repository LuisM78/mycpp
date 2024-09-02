#include <iostream>

int main() {
    int intValue = 7;
    float floatValue = static_cast<float>(intValue); // Explicit conversion

    std::cout << "Integer value: " << intValue << std::endl;
    std::cout << "Float value: " << floatValue << std::endl;

    return 0;
}