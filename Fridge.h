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
    void set_volume(double volume);

    //getters
    double get_volume( ) const;

    double getPowerConsumption() const override;

    ~Fridge();
};


#endif
