//header file for student class
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Person.hpp"
#include <string>

class Student : public Person {
public:
    //student class has as attributes name, age from the base person class 
    // attributes specific for the students class are  studentID, email address,major
    Student(const std::string& name, int age, int studentId, const std::string& email, const std::string& major);
    ~Student();

    // Getters for student ID, email and major
    int getStudentId() const;
    std::string getEmail() const;
    std::string getMajor() const;

    // Setters for student ID,email and major
    void setStudentId(int studentId);
    void setEmail(const std::string& email);
    void setMajor(const std::string& major);

    // use override method to print the info of the student
    void printInfo() const override;
    // methods for checking the validity for registration
    bool validateEmail() const;
    bool canRegister() const override;
private:
// studentId,email and major are declared as pointers 
    int* studentId;
    std::string* email;
    std::string* major;
};

#endif 
