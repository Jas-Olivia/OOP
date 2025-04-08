#include "Vehicle.h"
#include "Motorbike.h"
#include <ctime>
using namespace std;

Motorbike::Motorbike() {}
Motorbike::Motorbike(int ID)
: Vehicle(ID)
{

}

int Motorbike::getParkingDuration() {
    timeOfEntry=timeOfEntry - 4;
    return timeOfEntry;
    

}

Motorbike::~Motorbike() {}

