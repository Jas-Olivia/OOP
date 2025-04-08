#include "Vehicle.h"
#include "Car.h"
#include <ctime>
using namespace std;

Car::Car() {}
Car::Car(int ID)
: Vehicle(ID)
{

}

int Car::getParkingDuration() {
    timeOfEntry=timeOfEntry - 4;
    return timeOfEntry;
    

}

Car::~Car() {}


