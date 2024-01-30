#include <iostream>
using namespace std;

// Function to get an integer input from the user
int getAnIntFromTheUser(string prompt) {
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

// Function to compare two integers and return the larger one
int compareTwoInts(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

// Function to sum two integers
int sumTwoInts(int num1, int num2) {
    return num1 + num2;
}

int main() {
    // Get two integers from the user
    int firstNum = getAnIntFromTheUser("Enter the first integer: ");
    int secondNum = getAnIntFromTheUser("Enter the second integer: ");

    // Compare the two integers
    int largerNum = compareTwoInts(firstNum, secondNum);
    cout << "The larger number is: " << largerNum << endl;

    // Sum the two integers
    int sum = sumTwoInts(firstNum, secondNum);
    cout << "The sum of the two numbers is: " << sum << endl;

    return 0;
}
