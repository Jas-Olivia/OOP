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
    time_t now = time(nullptr);
    int duration = static_cast<int>((now - timeOfEntry) * 0.85); // apply 10% discount
    return duration;
    

}

Motorbike::~Motorbike() {}

