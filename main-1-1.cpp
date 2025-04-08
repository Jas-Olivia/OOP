#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std; 

int main() {
time_t now = time(nullptr);

int count = 0;


cout << "How many Vehicles will be parking?" << endl;
cin >> count;
Vehicle** Parked = new Vehicle*[count];



for (int i = 0; i < count; i++)
{
    string type = "Null";

    cout << "What type of Vehicle?" << endl;
    cin >> type; 

    if (type == "Car")
    {
        Parked[i] = new Car();
    }else if (type == "Bus")
    {
        Parked[i] = new Bus();
    }else if (type == "Motorbike")
    {
        Parked[i] = new Motorbike();
    }
    
    
    
}


for (int i = 0; i < count; i++)
{
    
    int result = Parked[i]->getParkingDuration();

    cout << result << endl;
}


    return 0;
}