#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"

class ParkingLot
{
private:
    int maxCars;
    Vehicle** Vehicles;
    int count;

public:
    ParkingLot();
    ParkingLot(int maxCars);
    int getCount() const;

    bool parkVehicle (Vehicle* v);
    bool unparkVehicle(int ID);
    int countOverstayingVehicles(int maxParkingDuration);

    ~ParkingLot();
};

#endif
