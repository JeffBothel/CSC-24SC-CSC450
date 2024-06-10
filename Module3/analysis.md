# CSC450: Programming III - Module 3 - Critical Thinking Assignment - Integer Manipulation Program
The following are the requirements that were given for the assignment for a program that was to be assembled.

*Program: Create a C++ program that asks the user to enter three integer values as input. Store the values into three different variables. For each variable, create an integer pointer to dynamic memory. Display the contents of the variables and pointers. In your program, be sure to use the new operator and delete operators to management memory.*

And given these statements of rquirements, the following points for requirements were identified for the applicaiton.
* Gather 3 integers from a user.
    * Store the values in different variables.
    * Create a pointer to the variables.
* Display the contents the variable and pointer.
* Use the new and delete operators to manage the memory for the application.

## Pseudocode for Program
```
start program with includes

main()
    userInt1 = new integer()
    pointer pntUserInt1 = userInt1
    userInt2 = new integer()
    pointer pntUserInt2 = userInt2
    userInt3 = new integer()
    pointer pntUserInt3 = userInt3

    out << "CSU Global - CSC40: Programming III - Module 3 - CT3"
    out << "Please input first number: "
    in >> userInt1
    out << "Please input second number: "
    in >> userInt2
    out << "Please input third number: "
    in >> userInt3

    out << "Output of numbers from the variable and pointer"
    out << "Original: " + userInt1 + "; Pointer: " + pntUserInt1 + ";\n"
    out << "Original: " + userInt2 + "; Pointer: " + pntUserInt2 + ";\n"
    out << "Original: " + userInt3 + "; Pointer: " + pntUserInt3 + ";\n"

    out << "Output of the variables when the original variable is deleted."
    delete userInt1
    delete userInt2
    delete userInt3
    out << "Original: " + userInt1 + "; Pointer: " + pntUserInt1 + ";\n"
    out << "Original: " + userInt2 + "; Pointer: " + pntUserInt2 + ";\n"
    out << "Original: " + userInt3 + "; Pointer: " + pntUserInt3 + ";\n"
```