#ifndef FRIDGE_H
#define FRIDGE_H
#include "Appliance.h"

class Fridge : public Appliance
{
private:
    double volume;
public:
    Fridge( );
    Fridge (int powerRating, double volume);

    //setters
    void setVolume(double volume);

    //getters
    double getVolume( ) const;

    double getPowerConsumption() const override;

    ~Fridge();
};


#endif
