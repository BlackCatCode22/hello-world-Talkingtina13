#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string myStr = "";
    string fileName = "";
    int myPause = 0;

    // Open a file for reading.
    ifstream myAnimalFile("C:/cStuff/midProgFiles/animalNames.txt");

    // Read the file one line at a time.
    while (getline(myAnimalFile, myStr) && myPause < 2) {
        cout << "\n " << myStr;
        cout << " \n Enter 1 for next line, 2 to stop: ";
        cin >> myPause;
    }
    cout << "\n\n *********** end of while loop reading file a line at a time **********\n\n";

    // Return to top of file
    myAnimalFile.clear();
    myAnimalFile.seekg(0);

    // Prove that clear() and seekg(0) worked.
    getline(myAnimalFile, myStr);
    cout << myStr;

    // Get each line of the file into a 1D array.
    // Count the number of lines in the file
    // Read the file one line at a time.
    int numOfLines = 1;
    while (getline(myAnimalFile, myStr)) {
        numOfLines++;
    }
    cout << "\n There are " << numOfLines << " lines in the file!";

    // Create a vector to hold the lines of the file.
    vector<string> myAnimalFileArray(numOfLines);

    // and...read each one of the file's lines into your new vector.
    // Return to top of file
    myAnimalFile.clear();
    myAnimalFile.seekg(0);

    // Read the file one line at a time and get each line into the vector.
    // Now that we know how many lines are in the file, we can use a for loop!
    for (int i = 0; i < numOfLines; i++) {
        getline(myAnimalFile, myAnimalFileArray[i]);
    }

    // let's see how our animal names look in a vector...
    cout << "\n********* The Animal Name File Array *********\n";
    for (int i = 0; i < numOfLines; i++) {
        cout << endl << myAnimalFileArray[i];
    }
    cout << "\n\n\n";

    // create two variables needed for array searching
    string speciesName = "";
    string arrayElementFirstWord = "";

    // Find the Hyena Names
    // Check for 'Hyena Names' in first line.
    speciesName = "Hyena";
    // find the first blank space in the array element
    int firstSpace = myAnimalFileArray[0].find(" ");
    cout << "\n the first space is at ..." << firstSpace;
    arrayElementFirstWord = myAnimalFileArray[0].substr(0, 5);
    cout << "\n arrayElementFirstWord = " << arrayElementFirstWord;
    if (speciesName == arrayElementFirstWord) {
        cout << "\n strings are equal!";
    } else {
        cout << "\n strings are NOT NOT NOT equal!";
    }

    // Return to top again
    myAnimalFile.clear();
    myAnimalFile.seekg(0);

    return 0;
}
