#include "Gradebook.h"

void Gradebook::addGrade(const Grade& grade) {
    grades.push_back(grade);
}

std::vector<Grade> Gradebook::getGrades() const {
    return grades;
}
