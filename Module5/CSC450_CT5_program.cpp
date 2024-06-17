#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Introducing the program to the user
    cout << "CSU Global - CSC450: Programming III - Module 5 - File Actions\n\n";

    // Declaring the variables
    string originalFileName = "CSC450_CT5_mod5.txt";
    string reversedFileName = "CSC450-mod5-reverse.txt";
    string userLine;
    ofstream originalFileOut;
    ifstream originalFileIn;
    ofstream reversedFileOut;
    ifstream reversedFileIn;

    // Gathering the user input
    cout << "Please enter a line of text: ";
    getline(cin, userLine);
    originalFileOut.open(originalFileName, ios_base::app);
    originalFileOut << userLine;
    originalFileOut.close();

    // Reading the original file and writing the reversed file
    originalFileIn.open(originalFileName);
    reversedFileOut.open(reversedFileName);
    while (getline(originalFileIn, userLine)) {
        for (int i = userLine.length() - 1; i >= 0; i--) {
            reversedFileOut << userLine[i];
        }
    }
    originalFileIn.close();
    reversedFileOut.close();
}