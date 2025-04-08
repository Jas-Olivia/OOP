#ifndef CAR_H
#define CAR_H
#include <ctime>
#include "Vehicle.h"

using namespace std;

class Car: public Vehicle
{
private:

public:
    Car ();
    Car(time_t timeOfEntry, int ID);

    int getParkingDuration() override ;
    //reduce by 10% 
    
    ~Car();
};




#endif