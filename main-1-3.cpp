#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main () {

    ParkingLot lot(10);
    int nextID = 10;

    int maxCars = 5;
    int maxBus = 3;
    int maxMotorbikes = 2;

    int carsCount = 0;
    int busCount = 0;
    int MotorbikesCount = 0;


    for (int i = 0; i < 10; i++)
    {
        string type;
        cout << "What type of Vehicle?" << endl;
        cin >> type; 
        Vehicle* v = nullptr;
    
        if (type == "Car")
        {
            if (carsCount < maxCars)
            {
                v= new Car(nextID ++);
                carsCount++;
    
            }
            

        }else if (type == "Bus")
        {
            if (busCount < maxBus)
            {
                v= new Bus(nextID ++);
                busCount++;
    
            }
        }else if (type == "Motorbike")
        {
            if (MotorbikesCount < maxMotorbikes)
            {
                v= new Motorbike(nextID ++);
                MotorbikesCount++;
    
            }
        }
}

    int overstaying = lot.countOverstayingVehicles(15);
    cout << "Number of Overstaying Vehicles:" << overstaying << endl;
    
return 0;
}