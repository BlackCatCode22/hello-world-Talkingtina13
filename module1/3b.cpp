#include <iostream>

int main() {
    // Declare variables
    int userInput;

    // Prompt the user for input
    std::cout << "Enter an integer: ";
    
    // Get input from the user
    std::cin >> userInput;

    // Double the input
    int doubledValue = 2 * userInput;

    // Display the result
    std::cout << "Twice of " << userInput << " is: " << doubledValue << std::endl;

    return 0;
}
