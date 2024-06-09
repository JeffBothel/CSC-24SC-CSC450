#include <iostream>
#include <string>

// Using the standard namespace
using namespace std;

class InputSet {
    public:
        string str1;
        string str2;

        InputSet() {
            str1 = "";
            str2 = "";
        }

        InputSet(string str1, string str2) {
            this->str1 = str1;
            this->str2 = str2;
        }

        string Combine() {
            return "\'" + str1 + "\' \'" + str2 + "\'";
        }
};

int main() {
    // Displaying the course information
    cout << "CSU Global - CSC40: Programming III - Module 2 - CT2\n";

    // Setting up the variables that are for the two different strings
    int inputRounds = 3;
    InputSet stringSets[inputRounds];

    // Looping through the inputRounds to get the user input
    for (int i = 0; i < inputRounds; i++) {
        string str1;
        string str2;

        cout << "\nRound " << (i + 1) << ":\nPlease enter the first string: ";
        getline(cin, str1);

        cout << "Please enter the second string: ";
        getline(cin, str2);

        stringSets[i] = InputSet(str1, str2);
        cout << "Round " << (i + 1) << " input: " << stringSets[i].Combine() << "\n";
    }

    // Looping through the inputRounds to display the combined strings
    cout << "\nFinal output of information:\n";
    for (int i = 0; i < inputRounds; i++) {
        cout << "Round " << (i + 1) << ": " << stringSets[i].Combine() << "\n";
    }
}