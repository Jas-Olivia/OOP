#include "Vehicle.h"
#include "Motorbike.h"
#include <ctime>
using namespace std;

Motorbike::Motorbike() {}
Motorbike::Motorbike(time_t timeOfEntry, int ID)
: Vehicle(timeOfEntry, ID)
{

}

int Motorbike::getParkingDuration() {
    timeOfEntry - 0.15;
    return timeOfEntry;
    

}

Motorbike::~Motorbike() {}

