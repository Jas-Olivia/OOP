#include "Appliance.h"
#include <iostream>

using namespace std;

int main () {

    Appliance appliance1;

    cout << "Appliance1 inital power rating:" << appliance1.get_powerRating() << "\n";
    cout << "Appliance1 inital status:" << (appliance1.get_isOn() ? "On" : "Off") << "\n";
    cout << "Appliance1 inital power consumption:" << appliance1.getPowerConsumption() << "\n";
    
    appliance1.set_powerRating(100);
    appliance1.turnOn();

    cout << "Appliance1 current power rating:" << appliance1.get_powerRating() << "\n";
    cout << "Appliance1 current status:" << (appliance1.get_isOn() ? "On" : "Off") << "\n";
    cout << "Appliance1 current power consumption:" << appliance1.getPowerConsumption() << "\n";
    
    Appliance appliance2(1000);

    cout << "Appliance2 inital power rating:" << appliance2.get_powerRating() << "\n";
    cout << "Appliance2 inital status:" << (appliance2.get_isOn() ? "On" : "Off") << "\n";
    cout << "Appliance2 inital power consumption:" << appliance2.getPowerConsumption() << "\n";
    


    return 0;
}