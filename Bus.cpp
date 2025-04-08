#include "Vehicle.h"
#include "Bus.h"
#include <ctime>
using namespace std;

Bus::Bus() {}
Bus::Bus(time_t timeOfEntry, int ID)
: Vehicle(timeOfEntry, ID)
{

}

int Bus::getParkingDuration() {
    timeOfEntry=timeOfEntry - 4;
    return timeOfEntry;
    

}

Bus::~Bus() {}


