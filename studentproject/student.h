#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
#include <fstream>

class Student {
private:
    int id;
    std::string name;
    int age;
    std::string grade;

public:
    // Constructor
    Student(int id = 0, const std::string& name = "", int age = 0, const std::string& grade = "");

    // Getters and setters
    int getId() const;
    void setId(int id);

    std::string getName() const;
    void setName(const std::string& name);

    int getAge() const;
    void setAge(int age);

    std::string getGrade() const;
    void setGrade(const std::string& grade);

    // Display student details
    void display() const;

    // Methods to save to and load from file
    void saveToFile(std::ofstream& outFile) const;
    void loadFromFile(std::ifstream& inFile);
};

#endif
