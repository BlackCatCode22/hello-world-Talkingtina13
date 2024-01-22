#include <iostream>

int main() {
    //Declare variables
    int user_input;

    //Prompt user for input
    std::cout << "Enter an int: ";
   
   //get input
    std::cin >> user_input;

    //Double input
    int result = user_input *  2;
   
   // display result
    std::cout << "The double of " << user_input << " is " << result << std::endl;

    return 0;
}

