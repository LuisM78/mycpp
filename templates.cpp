#include <iostream>

// Template function to find the maximum of two values
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int int1 = 10, int2 = 20;
    double double1 = 5.5, double2 = 7.5;

    std::cout << "Max of " << int1 << " and " << int2 << " is: " << getMax(int1, int2) << std::endl;
    std::cout << "Max of " << double1 << " and " << double2 << " is: " << getMax(double1, double2) << std::endl;

    return 0;
}