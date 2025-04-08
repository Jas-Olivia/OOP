#include "Vehicle.h"
#include "Bus.h"
#include <ctime>
using namespace std;

Bus::Bus() {}
Bus::Bus(int ID)
: Vehicle(ID)
{

}

int Bus::getParkingDuration() {
    timeOfEntry=timeOfEntry - 4;
    return timeOfEntry;
    

}

Bus::~Bus() {}


