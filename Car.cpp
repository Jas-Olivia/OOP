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
    time_t now = time(nullptr);
    int duration = static_cast<int>((now - timeOfEntry) * 0.9); // apply 10% discount
    return duration;
    

}

Car::~Car() {}


