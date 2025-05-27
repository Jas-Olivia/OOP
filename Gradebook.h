#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <vector>
#include "Grade.h"

using namespace std;

class Gradebook
{
private:
    vector<Grade> grades;
public:
   void addGrade(const Grade& grade);
   vector<Grade> getGrades() const;
};



#endif