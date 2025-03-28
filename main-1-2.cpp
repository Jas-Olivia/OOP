#include "Person.h"
#include <iostream>

using namespace std;

PersonList createPersonList(int number);

int main (){
    int number = 5;
    PersonList list = createPersonList(number);

    for (int i = 0; i < number; i++)
    {
        cout << "Person " << i+1 << ": "
        << "Name = " << list.people[i].name
        << ", Age = " << list.people[i].age
        << endl;

    }
    delete[] list.people; // deallocate memory

    return 0;
}