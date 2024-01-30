#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Asking the user for three integers
    cout << "Enter three integers:\n";
    cin >> num1 >> num2 >> num3;

    // Determining the largest integer using nested if statements
    if (num1 >= num2) {
        if (num1 >= num3) {
            cout << "The largest integer is: " << num1 << endl;
        } else {
            cout << "The largest integer is: " << num3 << endl;
        }
    } else {
        if (num2 >= num3) {
            cout << "The largest integer is: " << num2 << endl;
        } else {
            cout << "The largest integer is: " << num3 << endl;
        }
    }

    return 0;
}
