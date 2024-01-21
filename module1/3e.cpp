#include <iostream>
#include <string>

int main() {
    // Declare variables
    std::string userName;

    // Prompt the user for their name
    std::cout << "Enter your name: ";
    std::getline(std::cin, userName); // Allowing for spaces in the name

    // Create a friendly greeting
    std::cout << "Hello, " << userName << "! Welcome to my page. Have a great day!" << std::endl;

    return 0;
}
