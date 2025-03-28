#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

Person* createPersonArray(int number) {

    Person* personArray = new Person[number]; // dynamically allocates an array of 'number' person structs

    for (int i = 0; i < number; i++)
    {
        personArray[i].name = "John Doe";
        personArray[i].age = 0;
    }
    return personArray;
}




