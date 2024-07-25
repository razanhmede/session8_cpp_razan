// main method 
// include header files of the derived class 
#include <iostream>
#include "Student.hpp"
#include "Staff.hpp"
#include "Person.hpp"

int main() {
    try {
        // Creating a Person object
        Person person("Che Guevara", 39);
        person.printInfo();
        std::cout << "Can register: " << (person.canRegister() ? "Yes" : "No") << std::endl;


        // Creating a Student object
        Student student("Razan Hmede", 20, 202103291, "razan.hmede@lau.edu", "Mechatronics Engineering");
        student.printInfo();
        std::cout << "Can register: " << (student.canRegister() ? "Yes" : "No") << std::endl;


        // Creating a Staff object
        Staff staff("Noel Maalouf", 38, "Professor", "Robotics", "noelmaalouf@lau.edu");
        staff.printInfo();
        std::cout << "Can register: " << (student.canRegister() ? "Yes" : "No") << std::endl;


        // Modifying attributes using setters
        person.setName("Castro");
        student.setMajor("Software Engineering");
        // Invalid attributes to test exception handling 
        try {
            Staff invalidStaff("Charlie", 40, "Lecturer", "Physics", "charlie@.com");
        } catch (const std::invalid_argument& e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        // Printing updated information
        std::cout << "\nUpdated Information:" << std::endl;
        person.printInfo();
        student.printInfo();
        staff.printInfo();
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}




