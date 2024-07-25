#include "Staff.hpp"
#include <iostream>
#include <stdexcept>
#include <regex>

using namespace std;

Staff::Staff(const string& name, int age, const string& position, const string& department, const string& email)
    : Person(name, age) {
    //staff class has as attributes position,department,and email
    this->position = new string(position);
    this->department = new string(department);
    this->email = new string();

    // Validate and set email
    setEmail(email);
}

Staff::~Staff() {
    delete position;
    delete department;
    delete email;
}

// Getters for position,department,email
string Staff::getPosition() const {
    return *position;
}

string Staff::getDepartment() const {
    return *department;
}

string Staff::getEmail() const {
    return *email;
}

// Setters for position,department,email using derefrencing to access the objects
void Staff::setPosition(const string& position) {
    *this->position = position;
}

void Staff::setDepartment(const string& department) {
    *this->department = department;
}

void Staff::setEmail(const string& email) {
    // Implemeting basic email validation using regex to handle exception
    // the regex pattern is used to check if there are characters before and after the symbol @
    const regex pattern(R"((\w+)(\.|\_)?(\w*)@(\w+)(\.(\w+))+)");
    if (!regex_match(email, pattern)) {
        throw invalid_argument("Invalid email format");
    }
    *this->email = email;
}
// validate email
bool Staff::validateEmail() const {
    return email->find('@') != std::string::npos && email->find('.') != std::string::npos;
}
// validate position
bool Staff::isPositionValid() const {
    const std::string validPositions[] = {"Professor", "Associate Professor", "Lecturer"};
    for (const std::string& validPosition : validPositions) {
        if (*position == validPosition) {
            return true;
        }
    }
    return false;
}
// validate registration
bool Staff::canRegister() const {
    //must be of legal age, have a valid email, and position must be valid to be able to register
    return Person::canRegister() && validateEmail() && isPositionValid();
}

// Print info for staff 
void Staff::printInfo() const {
    Person::printInfo();
    cout << "Position: " << *position
         << "\nDepartment: " << *department
         << "\nEmail: " << *email << endl;
}
