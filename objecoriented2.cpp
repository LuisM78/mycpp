#include <iostream>

class Rectangle {
public:
    // Constructor
    Rectangle(double w, double h) : width(w), height(h) {
        std::cout << "Rectangle created!" << std::endl;
    }

    // Destructor
    ~Rectangle() {
        std::cout << "Rectangle destroyed!" << std::endl;
    }

    // Member function
    double area() {
        return width * height;
    }

private:
    double width;
    double height;
};

int main() {
    // Create an object of the Rectangle class
    Rectangle rect(10.0, 5.0);
    std::cout << "Area: " << rect.area() << std::endl;

    std::cout << "Testing when the rec is destroyed " << std::endl;
    Rectangle rect2(15.0, 1.0);
    std::cout << "Area: " << rect2.area() << std::endl;
    return 0;
}

