#ifndef BUS_H
#define BUS_H
#include <ctime>
#include "Vehicle.h"

using namespace std;

class Bus: public Vehicle
{
private:

public:
    Bus();
    Bus(time_t timeOfEntry, int ID);

    int getParkingDuration() override;
    // reduce by 25%
    
    ~Bus();
};




#endif