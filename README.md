# session8_cpp_razan: University Program
## Overview
This project represents a university program where students and staff are managed through a set of classes.

It includes functionality for managing personal details such as age and name, validating emails, and determining eligibility for registration through a basic set of rules.

Exception handling was effectively implemented and tested for negative age and invalid email address.

Pointers were effectively used for memory management.

## Details
### Person Class:
This is the base class for all classes in the program
- **Atrributes**: 'name' & 'age' of the person
### Student Class:
The 'Student Class' inherits from the 'Person Class'(name and age) and has additional specific attributes to students 
- **Attributes**: 'studentid', 'email' & 'major'
- **Methods**: 'getStudentId()' , 'getEmail()', 'getMajor()','setStudentId(int)', 'setEmail(const std::string&)', 'setMajor(const std::string&)' , 'printInfo()' , 'validateEmail()' ,'canRegister()'
### Staff Class:
The 'Staff Class' inherits from the 'Person Class'  (name and age) and has additional specific attributes to staff
- **Attributes**: 'position', 'department' & 'email'
- **Methods**: 'getPosition()' , 'getEmail()', 'getDepartment()','setPosition(const std::string&)', 'setEmail(const std::string&)', 'setDepartment(const std::string&)' , 'printInfo()' , 'validateEmail()' ,'canRegister()', 'isPositionValid()'
  
 ## Output:
 After running the main.cpp file the info of the person, student,staff objects created will be printed as well as their eligibility to register based on legal age,valid email and valid position.
 
This method for eligibility for registration is simple and basic.

## Usage:

1. **Compile the Code**: Use a C++ compiler to compile the source files.
   ```bash
   g++ -o session8_cpp_razan main.cpp Person.cpp Student.cpp Staff.cpp
   ```
2. **Run the Code**
   ```bash
   ./session8_cpp_razan
   ```

