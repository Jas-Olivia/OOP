#include "Fridge.h"

Fridge::Fridge() {

    volume = 0;
}

Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating) {
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
    double powerConsumption = get_powerRating() * 24 * (volume/100);

    return powerConsumption;

}
    Fridge::~Fridge(){

    }