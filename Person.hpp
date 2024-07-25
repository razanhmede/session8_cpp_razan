// header file for base class person
#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>

class Person {
public:
    Person(const std::string& name, int age);
    virtual ~Person();

    // Getters for name and age
    std::string getName() const;
    int getAge() const;

    // Setters for name and age
    void setName(const std::string& name);
    void setAge(int age);

    // Virtual function for printing info
    virtual void printInfo() const;
    //checking hte eligibility for registration in the University
    virtual bool canRegister() const;

protected:
    std::string* name;
    int* age;
};

#endif // PERSON_HPP
