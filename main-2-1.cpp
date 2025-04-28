#include "Fridge.h"
#include <iostream>

using namespace std; 

int main () {

    Fridge fridge1;

    cout << "Fridge 1 inital power rating:" << fridge1.get_powerRating() << "\n";
    cout << "Fridge 1 inital volume:" << fridge1.get_volume() << " litres \n";
    cout << "Fridge 1 inital power consumption:" << fridge1.getPowerConsumption() << "\n";

    fridge1.set_powerRating(150);
    fridge1.set_volume(250.5);
    fridge1.turnOn();

    cout << "Fridge 1 power rating:" << fridge1.get_powerRating() << "\n";
    cout << "Fridge 1 volume:" << fridge1.get_volume() << " litres \n";
    cout << "Fridge 1 status:" << (fridge1.get_isOn() ? "On" : "Off") << "\n";
    cout << "Fridge 1 power consumption:" << fridge1.getPowerConsumption() << "\n";

    Fridge fridge2(500, 50.5);

    cout << "Fridge 2 inital power rating:" << fridge2.get_powerRating() << "\n";
    cout << "Fridge 2 inital volume:" << fridge2.get_volume() << " litres \n";
    cout << "Fridge 2 inital power consumption:" << fridge2.getPowerConsumption() << "\n";


    return 0;
}