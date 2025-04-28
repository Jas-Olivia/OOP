#include "TV.h"
#include <iostream>

using namespace std; 

int main () {

    TV TV1;

    cout << "TV 1 inital power rating:" << TV1.get_powerRating() << "\n";
    cout << "TV 1 inital screen size:" << TV1.getScreenSize() << "  \n";
    cout << "TV 1 inital power consumption:" << TV1.getPowerConsumption() << "\n";

    TV1.set_powerRating(150);
    TV1.setScreenSize(250.5);
    TV1.turnOn();

    cout << "TV 1 power rating:" << TV1.get_powerRating() << "\n";
    cout << "TV 1 screen size:" << TV1.getScreenSize() << " litres \n";
    cout << "TV 1 status:" << (TV1.get_isOn() ? "On" : "Off") << "\n";
    cout << "TV 1 power consumption:" << TV1.getPowerConsumption() << "\n";

    TV TV2(500, 50.5);

    cout << "TV 2 inital power rating:" << TV2.get_powerRating() << "\n";
    cout << "TV 2 inital screen size:" << TV2.getScreenSize() << "  \n";
    cout << "TV 2 inital power consumption:" << TV2.getPowerConsumption() << "\n";


    return 0;
}