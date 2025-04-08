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

    for (int i = 0; i < 10; i++)
    {
        string type;
        cout << "What type of Vehicle?" << endl;
        cin >> type; 
        Vehicle* v = nullptr;
    
        if (type == "Car")
        {
            v= new Car(nextID ++);


        }else if (type == "Bus")
        {
            v= new Bus(nextID ++);
        }else if (type == "Motorbike")
        {
            v= new Motorbike(nextID ++);
        }
        
        if (!lot.parkVehicle(v)) {
        delete v;  // prevent memory leak if not parked
        }
        }
    
        int idToUnpark;
        cout << "\nEnter the ID of the vehicle to unpark: ";
        cin >> idToUnpark;

        if (!lot.unparkVehicle(idToUnpark)) {
            cout << "Unable to unpark vehicle. It was not found.\n";
        } else {
            cout << "Vehicle with ID " << idToUnpark << " has been removed from the lot.\n";
        }

        return 0;

}