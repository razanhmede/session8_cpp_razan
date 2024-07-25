// header file for class staff
#ifndef STAFF_HPP
#define STAFF_HPP

#include "Person.hpp"
#include <string>

class Staff : public Person {
public:
//staff class has as attributes name, age from the base person class 
// attributes specific for the staff class are position, email address,department 
    Staff(const std::string& name, int age, const std::string& position, const std::string& department, const std::string& email);
    ~Staff();

    // Getters for position,department,and email
    std::string getPosition() const;
    std::string getDepartment() const;
    std::string getEmail() const;

    // Setters for position,department,email using refrencing 
    void setPosition(const std::string& position);
    void setDepartment(const std::string& department);
    void setEmail(const std::string& email);

    // Override method to print the info of the staff member
    void printInfo() const override;
    // methods for checking the validity for registration
    bool canRegister() const override;
    bool validateEmail() const;
    bool isPositionValid() const;
    
private:
// position,email and department are declared as pointers 
    std::string* position;
    std::string* department;
    std::string* email;
};

#endif 
