# CSC450: Programming III - Module 2 - Critical Thinking Assignment - Psuedocode
The following is the given requirements for the assignment.

*Program: Create a simple C++ console application that will write a program that will take two string inputs from a user. Your program should concatenate the two strings and then print the resulting output to the screen. Take the two string inputs from the user 3 times for varying string lengths.*

And given these requirements, the following points were constructed for the program that needed to be developed.
* The user is asked to enter information 3 times over the course of the program.
    * Each time the user is asked to enter two srings.
    * Those two strings are concatenated together and displayed to the user.
* After the program finishes its execution, it outputs the 3 responses given.

## Psuedocode for Program
```
start program with inclusions

class userInputSet()
    public string1
    public string2

    constructor(string1, string2)
        string1 = string1
        string2 = string2

    Combine()
        return "\'" + string1 + "\' and \'" + string2 + "\'"

main()
    int inputRounds = 3
    userInputSet stringSets[inputRounds]

    out << "CSU Global - CSC40: Programming III - Module 2 - CT2"
    while(i < inputRounds)
        out << "<<Round " << (i + 1) << ">>\nPlease input first string: "
        in >> stringSets[i].string1
        out << "Please input second string: "
        in >> stringSets[i].string2
        out << "\n<<Round " << (i + 1) << " Output>>\n"
        out << stringSets[i].Combine()

    out << "Final output of the rounds\n"
    while(i < inputRounds)
        out << "Round " << (i + 1) << ": " << stringSets[i].Combine() << "\n"
```