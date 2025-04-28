#include "Fridge.h"

Fridge::Fridge() {

    volume = 0;
}

Fridge::Fridge(int powerRating, double volume) {
    this->volume = volume;
}

//setters
void Fridge::setVolume(double volume) {
    this->volume = volume;
}

//gettters
double Fridge::getVolume() const {
    return volume;
}

double Fridge::getPowerConsumption() const {
    return get_powerRating() * 24 * (volume/100);

}
    Fridge::~Fridge(){

    }