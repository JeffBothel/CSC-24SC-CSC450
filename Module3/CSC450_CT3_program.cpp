#include <iostream>
#include <string>

using namespace std;

int main() {
    // Integer declaration and pointer creation
    int* userInt1 = new int();
    int& pntUserInt1 = *userInt1;
    int* userInt2 = new int();
    int& pntUserInt2 = *userInt2;
    int* userInt3 = new int();
    int& pntUserInt3 = *userInt3;

    // Gather the integers from the user
    cout << "CSU Global - CSC40: Programming III - Module 3 - CT3\n\n";
    cout << "This program will take three integers from the user and output the integers and their pointers.\n";
    cout << "Enter an integer: ";
    cin >> *userInt1;
    cout << "Enter another integer: ";
    cin >> *userInt2;
    cout << "Enter a third integer: ";
    cin >> *userInt3;

    // Output the integers and their pointers
    cout << "\nOutput of the integers with the output of their pointers (pointers target the address space):\n";
    cout << "First - Original: " << *userInt1 << "; Pointer: " << pntUserInt1 << ";\n";
    cout << "Second - Original: " << *userInt2 << "; Pointer: " << pntUserInt2 << ";\n";
    cout << "Third - Original: " << *userInt3 << "; Pointer: " << pntUserInt3 << ";\n";

    // Delete the pointers and their original values and then output the integers and their pointers
    cout << "\n\nDeleting the pointers and their original values...\n";
    delete userInt1;
    delete userInt2;
    delete userInt3;

    cout << "Output of the integers with the output of their pointers:\n";
    cout << "First - Original: " << *userInt1 << "; Pointer: " << pntUserInt1 << ";\n";
    cout << "Second - Original: " << *userInt2 << "; Pointer: " << pntUserInt2 << ";\n";
    cout << "Third - Original: " << *userInt3 << "; Pointer: " << pntUserInt3 << ";\n\n";
}