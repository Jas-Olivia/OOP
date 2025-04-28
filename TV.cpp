#include "TV.h"

TV::TV() {

    screenSize = 0;
}

TV::TV(int powerRating, double screenSize) {
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
    return get_powerRating() * (screenSize/10);

}
    TV::~TV(){

    }