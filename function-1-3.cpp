#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

PersonList deepCopyPersonList(PersonList pl){


    // creating a new Perosnlist
    PersonList newList;

    // allocating memory for the people array in the new list 
    newList.numPeople = pl.numPeople;
    newList.people = new Person[newList.numPeople];

    // copy each person data from the orginal into the new 

    for (int i = 0; i < newList.numPeople; i++)
    {
        newList.people[i].name = pl.people[i].name;
        newList.people[i].age = pl.people[i].age;
        
    }

    return newList;
    
}