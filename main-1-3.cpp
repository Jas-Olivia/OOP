#include <iostream>
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
#include "Gradebook.h"
#include "University.h"


int main () {
    University University("Adelaide","South Australia");

    University.addCourse(12345, "OOP");

    Student* student = new Student("Seb", 1884670);

    Course& course = University.getCourses().at(0);
    course.addPerson(student);

    Gradebook* gradebook = University.getGradebook();
    gradebook->addGrade(Grade(1884670, 12345, "Assign 1", 90));
    gradebook->addGrade(Grade(1884670, 12345, "Assign 2", 50));
    gradebook->addGrade(Grade(1884670, 12345, "Assign 3", 70));
    
    std::vector<Grade> grades = gradebook->getGrades();
    for (const Grade& g : grades) {
        std::cout << "Student ID: " << g.getStudentId() << std::endl;
        std::cout << "Course ID: " << g.getCourseId() << std::endl;
        std::cout << "Assignment: " << g.getAssignmentName() << std::endl;
        std::cout << "Value: " << g.getValue() << std::endl;
        std::cout << "-----------------------------" << std::endl;
    }

    // Clean up
    delete student;

    return 0;

}


