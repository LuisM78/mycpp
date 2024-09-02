#include <iostream>
#include <vector>
#include <fstream>
#include "Student.h"

void addStudent(std::vector<Student>& students);
void viewStudents(const std::vector<Student>& students);
void updateStudent(std::vector<Student>& students);
void deleteStudent(std::vector<Student>& students);
void saveToFile(const std::vector<Student>& students);
void loadFromFile(std::vector<Student>& students);

int main() {
    std::vector<Student> students;
    loadFromFile(students); // Load existing students from file at startup

    int choice;
    do {
        std::cout << "\n--- Student Management System ---" << std::endl;
        std::cout << "1. Add Student" << std::endl;
        std::cout << "2. View Students" << std::endl;
        std::cout << "3. Update Student" << std::endl;
        std::cout << "4. Delete Student" << std::endl;
        std::cout << "5. Save to File" << std::endl;
        std::cout << "6. Load from File" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                viewStudents(students);
                break;
            case 3:
                updateStudent(students);
                break;
            case 4:
                deleteStudent(students);
                break;
            case 5:
                saveToFile(students);
                break;
            case 6:
                loadFromFile(students);
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

void addStudent(std::vector<Student>& students) {
    int id, age;
    std::string name, grade;
    
    std::cout << "Enter Student ID: ";
    std::cin >> id;
    std::cin.ignore(); // Ignore newline
    std::cout << "Enter Student Name: ";
    std::getline(std::cin, name);
    std::cout << "Enter Student Age: ";
    std::cin >> age;
    std::cin.ignore(); // Ignore newline
    std::cout << "Enter Student Grade: ";
    std::getline(std::cin, grade);
    
    students.push_back(Student(id, name, age, grade));
    std::cout << "Student added successfully!" << std::endl;
}

void viewStudents(const std::vector<Student>& students) {
    if (students.empty()) {
        std::cout << "No students to display." << std::endl;
        return;
    }
    for (const auto& student : students) {
        student.display();
    }
}

void updateStudent(std::vector<Student>& students) {
    int id;
    std::cout << "Enter the Student ID to update: ";
    std::cin >> id;

    for (auto& student : students) {
        if (student.getId() == id) {
            std::string name, grade;
            int age;

            std::cout << "Enter new name: ";
            std::cin.ignore();
            std::getline(std::cin, name);
            student.setName(name);

            std::cout << "Enter new age: ";
            std::cin >> age;
            student.setAge(age);

            std::cout << "Enter new grade: ";
            std::cin.ignore();
            std::getline(std::cin, grade);
            student.setGrade(grade);

            std::cout << "Student updated successfully!" << std::endl;
            return;
        }
    }
    std::cout << "Student not found." << std::endl;
}

void deleteStudent(std::vector<Student>& students) {
    int id;
    std::cout << "Enter the Student ID to delete: ";
    std::cin >> id;

    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->getId() == id) {
            students.erase(it);
            std::cout << "Student deleted successfully!" << std::endl;
            return;
        }
    }
    std::cout << "Student not found." << std::endl;
}

void saveToFile(const std::vector<Student>& students) {
    std::ofstream outFile("students.txt");
    if (!outFile) {
        std::cout << "Error opening file for writing!" << std::endl;
        return;
    }

    for (const auto& student : students) {
        student.saveToFile(outFile);
    }

    outFile.close();
    std::cout << "Students saved to file successfully!" << std::endl;
}

void loadFromFile(std::vector<Student>& students) {
    std::ifstream inFile("students.txt");
    if (!inFile) {
        std::cout << "Error opening file for reading!" << std::endl;
        return;
    }

    students.clear(); // Clear existing data
    Student student;
    while (inFile.peek() != EOF) { // Read until the end of the file
        student.loadFromFile(inFile);
        students.push_back(student);
    }

    inFile.close();
    std::cout << "Students loaded from file successfully!" << std::endl;
}

