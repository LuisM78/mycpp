#include <iostream>
#include <vector>
#include <algorithm> // For algorithms like sort

int main() {
    // Create a vector and add some elements
    std::vector<int> vec = {5, 1, 4, 3, 2};

    // Use an iterator to print elements
    std::cout << "Vector elements: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Sort the vector using an algorithm
    std::sort(vec.begin(), vec.end());

    // Print the sorted elements
    std::cout << "Sorted vector: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
