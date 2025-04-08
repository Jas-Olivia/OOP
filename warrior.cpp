#include "player.h"
#include "warrior.h"
#include <string>
#include <iostream>
using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon)
    : player(name, health, damage), weapon(weapon)  // All in the initializer list
{
   
}

void Warrior::swingWeapon(player* opponent) {
    cout << name << " swings their " << weapon << "at " <<  opponent->getName(name)
    << " for" << damage << " damage." << endl;

    opponent->takeDamage(damage);

}  

string Warrior::getWeapon(string weapon) {
    return weapon;
}

void Warrior::setWeapon(string w) {
    weapon =w;
}
