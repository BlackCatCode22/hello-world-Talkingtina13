#include <iostream>

int main() {
    // Declare variables
    int firstNumber, secondNumber;

    // Prompt the user for the first integer
    std::cout << "Enter the first integer: ";
    std::cin >> firstNumber;

    // Prompt the user for the second integer
    std::cout << "Enter the second integer: ";
    std::cin >> secondNumber;

    // Calculate the sum
    int sum = firstNumber + secondNumber;

    // Display the result
    std::cout << "The sum of " << firstNumber << " and " << secondNumber << " is: " << sum << std::endl;

    return 0;
}
