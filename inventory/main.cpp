#include <iostream>
#include <vector>
#include <fstream>
#include "Item.h"

void addItem(std::vector<Item>& inventory);
void viewInventory(const std::vector<Item>& inventory);
void updateItem(std::vector<Item>& inventory);
void deleteItem(std::vector<Item>& inventory);
void saveToFile(const std::vector<Item>& inventory);
void loadFromFile(std::vector<Item>& inventory);

int main() {
    std::vector<Item> inventory;
    loadFromFile(inventory); // Load existing inventory from file at startup

    int choice;
    do {
        std::cout << "\n--- Inventory Management System ---" << std::endl;
        std::cout << "1. Add Item" << std::endl;
        std::cout << "2. View Inventory" << std::endl;
        std::cout << "3. Update Item" << std::endl;
        std::cout << "4. Delete Item" << std::endl;
        std::cout << "5. Save to File" << std::endl;
        std::cout << "6. Load from File" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addItem(inventory);
                break;
            case 2:
                viewInventory(inventory);
                break;
            case 3:
                updateItem(inventory);
                break;
            case 4:
                deleteItem(inventory);
                break;
            case 5:
                saveToFile(inventory);
                break;
            case 6:
                loadFromFile(inventory);
                break;
            case 0:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please enter a valid option." << std::endl;
        }
    } while (choice != 0);

    return 0;
}

/*
void addItem(std::vector<Item>& inventory) {
    int id, quantity;
    std::string name;
    double price;

    std::cout << "Enter Item ID: ";
    std::cin >> id;
    std::cin.ignore(); // Ignore newline
    std::cout << "Enter Item Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Item Quantity: ";
    std::cin >> quantity;
    std::cout << "Enter Item Price: ";
    std::cin >> price;

    inventory.push_back(Item(id, name, quantity, price));
    std::cout << "Item added successfully!" << std::endl;
}
*/
void addItem(std::vector<Item>& inventory) {
    int id, quantity;
    std::string name;
    double price;

    std::cout << "Enter Item ID: ";
    std::cin >> id;

    // Check if item with the same ID already exists
    for (const auto& item : inventory) {
        if (item.getId() == id) {
            std::cout << "Error: An item with this ID already exists." << std::endl;
            return; // Exit the function without adding the item
        }
    }

    std::cin.ignore(); // Ignore newline
    std::cout << "Enter Item Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Item Quantity: ";
    std::cin >> quantity;
    std::cout << "Enter Item Price: ";
    std::cin >> price;

    inventory.push_back(Item(id, name, quantity, price));
    std::cout << "Item added successfully!" << std::endl;
}


void viewInventory(const std::vector<Item>& inventory) {
    if (inventory.empty()) {
        std::cout << "No items to display." << std::endl;
        return;
    }
    for (const auto& item : inventory) {
        item.display();
        std::cout << "------------------------" << std::endl;
    }
}

void updateItem(std::vector<Item>& inventory) {
    int id;
    std::cout << "Enter the Item ID to update: ";
    std::cin >> id;

    for (auto& item : inventory) {
        if (item.getId() == id) {
            int newQuantity;
            double newPrice;

            std::cout << "Enter new quantity: ";
            std::cin >> newQuantity;
            item.setQuantity(newQuantity);

            std::cout << "Enter new price: ";
            std::cin >> newPrice;
            item.setPrice(newPrice);

            std::cout << "Item updated successfully!" << std::endl;
            return;
        }
    }
    std::cout << "Item not found." << std::endl;
}

void deleteItem(std::vector<Item>& inventory) {
    int id;
    std::cout << "Enter the Item ID to delete: ";
    std::cin >> id;

    for (auto it = inventory.begin(); it != inventory.end(); ++it) {
        if (it->getId() == id) {
            inventory.erase(it);
            std::cout << "Item deleted successfully!" << std::endl;
            return;
        }
    }
    std::cout << "Item not found." << std::endl;
}

void saveToFile(const std::vector<Item>& inventory) {
    std::ofstream outFile("inventory.txt");
    if (!outFile) {
        std::cout << "Error opening file for writing!" << std::endl;
        return;
    }

    for (const auto& item : inventory) {
        item.saveToFile(outFile);
    }

    outFile.close();
    std::cout << "Inventory saved to file successfully!" << std::endl;
}

void loadFromFile(std::vector<Item>& inventory) {
    std::ifstream inFile("inventory.txt");
    if (!inFile) {
        std::cout << "Error opening file for reading!" << std::endl;
        return;
    }

    inventory.clear(); // Clear existing inventory
    Item item;
    while (inFile.peek() != EOF) { // Read until the end of the file
        item.loadFromFile(inFile);
        inventory.push_back(item);
    }

    inFile.close();
    std::cout << "Inventory loaded from file successfully!" << std::endl;
}
