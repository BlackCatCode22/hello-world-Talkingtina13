#include <iostream>

int main() {
    // Declare variables
    int userInput;

    // Prompt the user for input
    std::cout << "Enter an integer: ";
    
    // Get input from the user
    std::cin >> userInput;

    // Triple the input
    int tripledValue = 3 * userInput;

    // Display the result
    std::cout << "Thrice of " << userInput << " is: " << tripledValue << std::endl;

    return 0;
}


