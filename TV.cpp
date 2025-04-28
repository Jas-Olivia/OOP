#include "TV.h"

TV::TV() {

    screenSize = 0;
}

TV::TV(int powerRating, double screenSize) {
    this->screenSize = screenSize;
}

//setters
void TV::set_screenSize(double screenSize) {
    this->screenSize = screenSize;
}

//gettters
double TV::get_screenSize() const {
    return screenSize;
}

double TV::getPowerConsumption() const {
    return get_powerRating() * (screenSize/10);

}
    TV::~TV(){

    }