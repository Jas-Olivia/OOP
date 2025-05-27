#ifndef GRADE_H
#define GRADE_H

#include <string>

class Grade {
private:
    int student_id;
    int course_id;
    std::string assignment_name;
    int value;
public:
    Grade(int studentId, int courseId, const std::string& assignment, int value);
    int getStudentId() const;
    int getCourseId() const;
    std::string getAssignmentName() const;
    int getValue() const;
};

#endif
