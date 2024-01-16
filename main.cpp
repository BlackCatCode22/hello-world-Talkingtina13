#include <iostream>
using namespace std;

int addTwoInts(int a, int b) {
    return a + b;
}

int findLargestOfThree(int x, int y, int z) {
    return max(x, max(y, z));
}

int main() {
    // Add two integers
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    
    int sum = addTwoInts(num1, num2);
    cout << "Sum of two integers: " << sum << endl;

    // Find the largest of three integers
    int num3, largest;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    cout << "Enter third integer: ";
    cin >> num3;

    largest = findLargestOfThree(num1, num2, num3);
    cout << "Largest of three integers: " << largest << endl;

    return 0;
}
