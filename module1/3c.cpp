#include <iostream>

int main() {
    // Declare variables
    int user_Input;

    // Prompt the user for input
    std::cout << "Enter an int: ";
    
    // Get input from the user
    std::cin >> user_Input;

    // Triple the input
    int result = user_Input * 3;

    // Display the result
    std::cout << "The triple of " << user_Input << " is " << result << std::endl;
    return 0;
}


