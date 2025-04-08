#include "player.h"
#include "wizard.h"
#include <string>
#include <iostream>
using namespace std;

Wizard::Wizard(int mana, string name, int health, int damage)
    : player(name, health, damage), mana(mana)  // All in the initializer list
{
   
}

void Wizard::castSpell(player* opponent) {
    cout << name << " casts spell at " <<  opponent->getName(name)
    << " for" << mana << " damage." << endl;

    opponent->takeDamage(damage);

}  

int Wizard::getMana(int mana) {
    return mana;
}

void Wizard::setMana(int m) {
    mana =m;
}
