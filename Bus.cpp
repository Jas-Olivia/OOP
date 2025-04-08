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
    time_t now = time(nullptr);
    int duration = static_cast<int>((now - timeOfEntry) * 0.75); // apply 10% discount
    return duration;
    

}

Bus::~Bus() {}


