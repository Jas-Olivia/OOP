#include "House.h" 


House::House(): appliances(nullptr), numAppliances(0) {
    
}

House::House(int numAppliances) : appliances(nullptr), numAppliances(numAppliances) {
  
    if (numAppliances > 0)
    {
        appliances = new Appliance*[numAppliances];
    }
    
}

bool House::addAppliance(Appliance* appliance) {

    Appliance** newAppliances = new Appliance*[numAppliances +1];

    for (int i = 0; i < numAppliances; i++)
    {
        newAppliances[i] = appliances[i];
    }
    
    newAppliances[numAppliances] = appliance;

    delete[] appliances;
    appliances = newAppliances;
    ++numAppliances;

    return true;

}

double House::getTotalPowerConsumption() {
    double totalPower = 0;
    for (int i = 0; i < numAppliances; i++)
    {
        totalPower += appliances[i]->getPowerConsumption();

    }
    return totalPower;
    
}
    
    
House::~House() {
    for (int i = 0; i < numAppliances; i++)
    {
        delete appliances[i];
    }
    delete[] appliances;

}
    
