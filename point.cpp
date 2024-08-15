#include <iostream>

int main() {
    int var = 20;      // Declare an integer variable and initialize it to 20
    int* ptr = &var;   // Declare a pointer to int and assign it the address of var
    int& ref = var;    // Declare a reference to int and initialize it to refer to var

    // Print the value of var
    std::cout << "Value of var: " << var << std::endl;

    // Print the value stored at the address pointed to by ptr (should be the same as var)
    std::cout << "Value pointed to by *ptr: " << *ptr << std::endl;
    std::cout << "Address of ptr: " << ptr << std::endl;
    // Print the value referred to by ref (should be the same as var)
    std::cout << "Value referred to by ref: " << ref << std::endl;

    // Modify the value of var using ptr
    *ptr = 30;
    std::cout << "New value of var (modified through ptr): " << var << std::endl;

    // Modify the value of var using ref
    ref = 40;
    std::cout << "New value of var (modified through ref): " << var << std::endl;
    std::cout << "check Address of ptr: " << ptr << std::endl;
    return 0;
}
