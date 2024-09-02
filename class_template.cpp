#include <iostream>

// Template class to store a pair of values
template <typename T>
class Pair {
private:
    T first, second;

public:
    Pair(T a, T b) : first(a), second(b) {}

    T getFirst() const { return first; }
    T getSecond() const { return second; }
};

int main() {
    Pair<int> intPair(10, 20);
    Pair<double> doublePair(3.5, 4.5);

    std::cout << "First of intPair: " << intPair.getFirst() << ", Second of intPair: " << intPair.getSecond() << std::endl;
    std::cout << "First of doublePair: " << doublePair.getFirst() << ", Second of doublePair: " << doublePair.getSecond() << std::endl;

    return 0;
}
