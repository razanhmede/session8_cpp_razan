#include "Student.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

//Student constructor 
Student::Student(const string& name, int age, int studentId, const string& email, const string& major)
    : Person(name, age) {
    //exception handling for student ID
    if (studentId < 0) {
        throw invalid_argument("Student ID cannot be negative");
    }
    //creating new objects on the heap and assigning it to this->studentId,this->email and this->major
    this->studentId = new int(studentId);
    this->email = new string(email);
    this->major = new string(major);
}

Student::~Student() {
    delete studentId;
    delete email;
    delete major;
}

// Getters for student ID, email and major
int Student::getStudentId() const {
    return *studentId;
}

string Student::getEmail() const {
    return *email;
}

string Student::getMajor() const {
    return *major;
}

// Setters for student ID,email and major 
//pointers are used for memory management 
//Dereferencing is used here to access string and int objects refrenced before 
void Student::setStudentId(int studentId) {
    if (studentId < 0) {
        throw invalid_argument("Student ID cannot be negative");
    }
    *this->studentId = studentId;
}

void Student::setEmail(const string& email) {
    *this->email = email;
}

void Student::setMajor(const string& major) {
    *this->major = major;
}
//check the validity of the email
bool Student::validateEmail() const {
    return email->find('@') != std::string::npos && email->find('.') != std::string::npos;
}
bool Student::canRegister() const {
    //must be a valid student and of legal age so they can register
    return Person::canRegister() && validateEmail();
}
// Print info for person and  specific for Student 
void Student::printInfo() const {
    Person::printInfo();
    cout << "Student ID: " << *studentId
         << "\nEmail: " << *email
         << "\nMajor: " << *major << endl;
}

