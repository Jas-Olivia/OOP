#include <iostream>
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

int main() {
    // Create student "Seb" with ID 1884670
    Student* student = new Student("Seb", 1884670);

    // Create instructor "Dr.V"
    Instructor* instructor = new Instructor("Dr.V");

    // Create course "OOP" with ID 1234
    Course oopCourse(1234, "OOP");

    // Add both to the course
    oopCourse.addPerson(student);
    oopCourse.addPerson(instructor);

    // Retrieve and print their details
    std::vector<Person*> persons = oopCourse.getPersons();

    for (Person* person : persons) {
        // Use dynamic_cast to determine the type
        if (Student* s = dynamic_cast<Student*>(person)) {
            std::cout << "Name of Student:" << s->getName() << std::endl;
            std::cout << "Id of Student:" << s->getId() << std::endl;
        } else if (Instructor* i = dynamic_cast<Instructor*>(person)) {
            std::cout << "Name of Instructor:" << i->getName() << std::endl;
        }
    }

    // Clean up
    delete student;
    delete instructor;

    return 0;
}
