#include "Grade.h"

Grade::Grade(int studentId, int courseId, const std::string& assignment, int value)
    : student_id(studentId), course_id(courseId), assignment_name(assignment), value(value) {}

int Grade::getStudentId() const {
    return student_id;
}

int Grade::getCourseId() const {
    return course_id;
}

std::string Grade::getAssignmentName() const {
    return assignment_name;
}

int Grade::getValue() const {
    return value;
}
