#include "Item.h"
#include <iostream>

// Default Constructor
Item::Item() : id(0), name(""), quantity(0), price(0.0) {}

// Parameterized Constructor
Item::Item(int id, const std::string& name, int quantity, double price)
    : id(id), name(name), quantity(quantity), price(price) {}

// Getters
int Item::getId() const {
    return id;
}

std::string Item::getName() const {
    return name;
}

int Item::getQuantity() const {
    return quantity;
}

double Item::getPrice() const {
    return price;
}

// Setters
void Item::setName(const std::string& name) {
    this->name = name;
}

void Item::setQuantity(int quantity) {
    this->quantity = quantity;
}

void Item::setPrice(double price) {
    this->price = price;
}

// Save item details to file
void Item::saveToFile(std::ofstream& outFile) const {
    outFile << id << std::endl;
    outFile << name << std::endl;
    outFile << quantity << std::endl;
    outFile << price << std::endl;
}

// Load item details from file
void Item::loadFromFile(std::ifstream& inFile) {
    inFile >> id;
    inFile.ignore();
    std::getline(inFile, name);
    inFile >> quantity;
    inFile >> price;
}

// Display item details
void Item::display() const {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Price: $" << price << std::endl;
}
