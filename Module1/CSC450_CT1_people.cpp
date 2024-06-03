#include <iostream>
#include <string>

using namespace std;

// Person class to hold the information for a person
class Person {
    public:
        string firstName;
        string lastName;
        string streetAddress;
        string city;
        string state;
        string zip;

        Person(string firstName, string lastName, string streetAddress, string city, string state, string zip) {
            this->firstName = firstName;
            this->lastName = lastName;
            this->streetAddress = streetAddress;
            this->city = city;
            this->state = state;
            this->zip = zip;
        }
};

int main() {
    // Displaying the course information
    cout << "CSU Global - CSC40: Programming III - Module 1 - CT1";

    // Creating 4 test people
    Person person1("John", "Doe", "123 Main St", "Denver", "CO", "80202");
    Person person2("Jane", "Doe", "456 Elm St", "Aurora", "CO", "80012");
    Person person3("Jim", "Smith", "789 Oak St", "Boulder", "CO", "80301");
    Person person4("Jill", "Smith", "101 Pine St", "Colorado Springs", "CO", "80901");

    // Assembling the the persons into an array for looping their display
    Person people[4] = {person1, person2, person3, person4};
    cout << "Listing of test people generated for this unit test:";
    for (int i = 0; i < 4; i++) {
        cout << "Person " << i + 1 << ":\n" << people[i].firstName << " " << people[i].lastName << "\n" << people[i].streetAddress << "\n" << people[i].city << ", " << people[i].state << " " << people[i].zip << "\n" << endl;
    }
    return 0;
}