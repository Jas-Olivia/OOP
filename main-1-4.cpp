#include "Person.h"
#include <iostream>

using namespace std;

PersonList shallowCopyPersonList(PersonList pl);
int main() {

    PersonList originalList; 
    originalList.numPeople = 3;
    originalList.people = new Person[originalList.numPeople];

    // Initialize the original list
    originalList.people[0] = {"John Doe", 25};
    originalList.people[1] = {"Jane Doe", 28};
    originalList.people[2] = {"Alex Smith", 30};

    PersonList copiedList = shallowCopyPersonList(originalList);

    // Print the original list
    cout << "Original List:" << endl;
    for (int i = 0; i < originalList.numPeople; i++) {
        cout << "Name: " << originalList.people[i].name 
             << ", Age: " << originalList.people[i].age << endl;
    }

    // Print the copied list
    cout << "\nCopied List:" << endl;
    for (int i = 0; i < copiedList.numPeople; i++) {
        cout << "Name: " << copiedList.people[i].name 
             << ", Age: " << copiedList.people[i].age << endl;
    }

    // Deallocate memory
    delete[] originalList.people;
    

    return 0;


}