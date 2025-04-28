#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance
{
private:
    int powerRating;
    bool isOn;
public:
    Appliance();
    Appliance(int powerRating);

    //Setters
    void set_powerRating(int powerRating);
    void set_isOn(bool isOn);

    //getters
    int get_powerRating() const;
    bool get_isOn() const;


    void turnOn ();
    void turnOff ();
    virtual double getPowerConsumption() const;
    virtual ~Appliance();
};

#endif