#include "TV.h"

TV::TV() {

    screenSize = 0;
}

TV::TV(int powerRating, double screenSize) : Appliance(powerRating) {
    this->screenSize = screenSize;
}

//setters
void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

//gettters
double TV::getScreenSize() const {
    return screenSize;
}

double TV::getPowerConsumption() const {
    double powerConsumption = get_powerRating() *  (screenSize/10);
    return powerConsumption;

}
    TV::~TV(){

    }