#include <iostream>

class Car {
public:
    // Data members
    std::string brand;
    int year;

    // Member function
    void displayInfo() {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }
};

int main() {
    // Create an object of the Car class
    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2020;

    // Call member function
    myCar.displayInfo();
    myCar.brand = "Subaru";
    myCar.displayInfo();
    return 0;
}
