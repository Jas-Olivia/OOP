#ifndef WARRIOR_H
#define WARRIOR_H
#include "player.h"
#include <string>
using namespace std;

class Warrior : public player
{
private:
    string weapon;
public:
    Warrior(string name, int health, int damage,string weapon);
    void swingWeapon(player* opponent);
    string getWeapon( string weapon);
    void setWeapon(string weapon);
};



#endif