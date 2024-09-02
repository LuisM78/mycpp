#include "Student.h"

// Constructor
Student::Student(int id, const std::string& name, int age, const std::string& grade) {
    this->id = id;
    this->name = name;
    this->age = age;
    this->grade = grade;
}

// Getters and setters
int Student::getId() const {
    return id;
}

void Student::setId(int id) {
    this->id = id;
}

std::string Student::getName() const {
    return name;
}

void Student::setName(const std::string& name) {
    this->name = name;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int age) {
    this->age = age;
}

std::string Student::getGrade() const {
    return grade;
}

void Student::setGrade(const std::string& grade) {
    this->grade = grade;
}

// Display student details
void Student::display() const {
    std::cout << "ID: " << id << ", Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
}

// Save student details to file
void Student::saveToFile(std::ofstream& outFile) const {
    outFile << id << std::endl;
    outFile << name << std::endl;
    outFile << age << std::endl;
    outFile << grade << std::endl;
}

// Load student details from file
void Student::loadFromFile(std::ifstream& inFile) {
    inFile >> id;
    inFile.ignore(); // Ignore newline
    std::getline(inFile, name);
    inFile >> age;
    inFile.ignore(); // Ignore newline
    std::getline(inFile, grade);
}
