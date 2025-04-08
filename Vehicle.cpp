#include "Vehicle.h"
#include <ctime>
using namespace std;

Vehicle::Vehicle() {

    timeOfEntry = time(nullptr);
}
Vehicle::Vehicle(int ID)

{
this->ID=ID;
timeOfEntry = time(nullptr);
}

int Vehicle::getID() {
    return ID;
}


Vehicle:: ~Vehicle() {}
