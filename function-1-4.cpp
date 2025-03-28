#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

PersonList shallowCopyPersonList(PersonList pl){

PersonList newList;

newList.numPeople = pl.numPeople;
newList.people = pl.people;

return newList;

}