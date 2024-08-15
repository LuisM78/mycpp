Reading user input in C++ is a common task and can be done using the standard input stream (`std::cin`). Below is a simple example demonstrating how to read different types of user input, including an integer, a floating-point number, and a string.

```cpp
#include <iostream>
#include <string>

int main() {
    int integerInput;
    double doubleInput;
    std::string stringInput;

    // Reading an integer
    std::cout << "Enter an integer: ";
    std::cin >> integerInput;

    // Reading a floating-point number
    std::cout << "Enter a floating-point number: ";
    std::cin >> doubleInput;

    // Clearing the input buffer before reading a string
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Reading a string (including spaces)
    std::cout << "Enter a string: ";
    std::getline(std::cin, stringInput);

    // Output the inputs
    std::cout << "\nYou entered the integer: " << integerInput << std::endl;
    std::cout << "You entered the floating-point number: " << doubleInput << std::endl;
    std::cout << "You entered the string: " << stringInput << std::endl;

    return 0;
}
```

### Explanation:

1. **Reading an Integer:**
   ```cpp
   std::cout << "Enter an integer: ";
   std::cin >> integerInput;
   ```
   This code prompts the user to enter an integer and stores the input in the variable `integerInput`.

2. **Reading a Floating-Point Number:**
   ```cpp
   std::cout << "Enter a floating-point number: ";
   std::cin >> doubleInput;
   ```
   This code prompts the user to enter a floating-point number and stores the input in the variable `doubleInput`.

3. **Clearing the Input Buffer:**
   ```cpp
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   ```
   After reading numbers, the input buffer may still contain the newline character (`'\n'`). This line clears the buffer, ensuring it is empty before reading a string.

4. **Reading a String:**
   ```cpp
   std::cout << "Enter a string: ";
   std::getline(std::cin, stringInput);
   ```
   This code prompts the user to enter a string and stores the input in the variable `stringInput`. The `std::getline` function reads the entire line, including spaces.

5. **Outputting the Inputs:**
   ```cpp
   std::cout << "\nYou entered the integer: " << integerInput << std::endl;
   std::cout << "You entered the floating-point number: " << doubleInput << std::endl;
   std::cout << "You entered the string: " << stringInput << std::endl;
   ```
   This code prints the values entered by the user.

This example demonstrates basic user input handling in C++. You can modify it to handle more complex input scenarios as needed.