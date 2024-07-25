#include "Person.hpp"
#include <iostream>
#include <stdexcept>

Person::Person(const std::string& name, int age) {
    // exception handling for age
    if (age < 0) {
        throw std::invalid_argument("Age cannot be negative!!!");
    }
    this->name = new std::string(name);
    this->age = new int(age);
}
Person::~Person() {
    delete name;
    delete age;
}

// Getters
std::string Person::getName() const {
    return *name;
}

int Person::getAge() const {
    return *age;
}

// Setters
void Person::setName(const std::string& name) {
    *this->name = name;
}

void Person::setAge(int age) {
    // exception handling for age
    if (age < 0) {
        throw std::invalid_argument("Attention!Age cannot be negative!Please enter a valid age number");
    }
    *this->age = age;
}

// Print the person's info
void Person::printInfo() const {
    std::cout << "Name: " << *name << "\nAge: " << *age << std::endl;
}
bool Person::canRegister() const {
    //must be at least 18 years old to register
    return *age >= 18;
}