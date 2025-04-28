#include <iostream>
#include "House.h"
#include "Fridge.h"
#include "TV.h"

using namespace std;

int main () {

    Fridge* fridge1 = new Fridge(100, 55.5);
    TV* TV1 = new TV(50, 25.2);

    House house1(0);

    house1.addAppliance(fridge1);
    house1.addAppliance(TV1);

    double totalPower = house1.getTotalPowerConsumption();
    cout << "Total Power Consumption:" << totalPower << "watt-hours\n";

    return 0;
}