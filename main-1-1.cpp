#include "Person.h"
#include <iostream>

using namespace std;

Person* createPersonArray(int number);

int main() {
    int n = 5;
    Person* people = createPersonArray(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Person " << i+1 << ": "
        << "Name = " << people[i].name
        << ", Age = " << people[i].age
        << endl;

    }
    delete[] people; // deallocate memory

    return 0;
}