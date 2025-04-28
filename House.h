#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"



class House
{
private:
    int numAppliances;
    Appliance** appliances;
    
public:
    House( );
    House (int numAppliances);

    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption();

   
    ~House();
};


#endif