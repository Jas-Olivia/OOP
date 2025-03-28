#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

PersonList createPersonList(int number) {
    PersonList list;

    list.people = new Person[number];
    list.numPeople = number;

    
    for (int i = 0; i < number; i++)
    {
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }
    return list;
}




