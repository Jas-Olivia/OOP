#include "Vehicle.h"
#include "Car.h"
#include <ctime>
using namespace std;

Car::Car() {}
Car::Car(time_t timeOfEntry, int ID)
: Vehicle(timeOfEntry, ID)
{

}

int Car::getParkingDuration() {
    timeOfEntry=timeOfEntry - 4;
    return timeOfEntry;
    

}

Car::~Car() {}


