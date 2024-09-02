#include <iostream>

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override { // Override pure virtual function
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    Circle c;
    c.draw(); // Calls Circle's draw()

    return 0;
}
