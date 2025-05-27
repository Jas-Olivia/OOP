#include "Course.h"

Course::Course(int id, const std::string& name) : id(id), name(name) {}

void Course::addPerson(Person* person) {
    persons.push_back(person);
}

int Course::getId() const {
    return id;
}

std::string Course::getName() const {
    return name;
}

std::vector<Person*> Course::getPersons() const {
    return persons;
}
