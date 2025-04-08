#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot() {
    maxCars = 10;
    count = 0;
    Vehicles = new Vehicle*[maxCars];
}

ParkingLot::ParkingLot(int maxCars)
{
    this->maxCars=maxCars;
    count = 0;
    Vehicles = new Vehicle*[maxCars];
}

int ParkingLot::getCount() const {
    return count;
}

bool ParkingLot::parkVehicle(Vehicle* v) {
    if (count < maxCars )
    {
        Vehicles[count++] =v;
        return true;
    }
    cout << "The lot is full" <<endl;

    return false;
    
}
bool ParkingLot::unparkVehicle(int ID) {
    for (int i = 0; i < count; ++i) {
        if (Vehicles[i]->getID() == ID) {
           delete Vehicles[i];
            for (int j = i; j < count - 1; ++j) {
                Vehicles[j] = Vehicles[j + 1];
            }
            Vehicles[count - 1] = nullptr;
            count--;
            return true;
        }
    }
    cout << "Vehicle not in the lot "<<endl;
    return false;
}

ParkingLot::~ParkingLot(){
    for (int i = 0; i < count; ++i) {
        delete Vehicles[i];
    }
    delete[] Vehicles;
}
