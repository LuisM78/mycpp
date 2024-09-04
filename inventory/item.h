#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <fstream>

class Item {
private:
    int id;
    std::string name;
    int quantity;
    double price;

public:
    // Constructors
    Item();
    Item(int id, const std::string& name, int quantity, double price);

    // Getters and Setters
    int getId() const;
    std::string getName() const;
    int getQuantity() const;
    double getPrice() const;

    void setName(const std::string& name);
    void setQuantity(int quantity);
    void setPrice(double price);

    // Methods for file handling
    void saveToFile(std::ofstream& outFile) const;
    void loadFromFile(std::ifstream& inFile);

    // Method to display item details
    void display() const;
};

#endif
