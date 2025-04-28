#ifndef TV_H
#define TV_H
#include "Appliance.h"

class TV : public Appliance
{
private:
    double screenSize;
public:
    TV( );
    TV (int powerRating, double screenSize);

    //setters
    void setScreenSize(double screenSize);

    //getters
    double getScreenSize( ) const;

    double getPowerConsumption() const override;

    ~TV();
};


#endif
