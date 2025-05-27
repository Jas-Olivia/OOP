#include <iostream>
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
#include "Gradebook.h"

int main() {

    Gradebook gradebook;

    Grade grade(1884670, 1234, "assign 1", 90);
    gradebook.addGrade(grade);

    std::vector<Grade> grades = gradebook.getGrades();

    for (const Grade& g : grades) {
        std::cout << "Student ID:" << g.getStudentId() << std::endl;
        std::cout << "Course ID:" << g.getCourseId() << std::endl;
        std::cout << "Assignment:" << g.getAssignmentName() << std::endl;
        std::cout << "Value:" << g.getValue() << std::endl;
    }

    return 0;
}