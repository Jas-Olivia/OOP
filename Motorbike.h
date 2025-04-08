#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <ctime>
#include "Vehicle.h"

using namespace std;

class Motorbike: public Vehicle
{
private:

public:
    Motorbike();
    Motorbike(int ID);

    int getParkingDuration() override;
    // reduce by 15%
    
    ~Motorbike();
};




#endif