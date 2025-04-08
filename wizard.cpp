#include "player.h"
#include "wizard.h"
#include <string>
#include <iostream>
using namespace std;

Wizard::Wizard(string name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana)  // All in the initializer list
{
   
}

void Wizard::castSpell(Player* opponent) {
    cout << name << " casts spell at " <<  opponent->getName()
    << " for" << getDamage() << " damage." << endl;

    opponent->takeDamage(getDamage());

}  

int Wizard::getMana() {
    return mana;
}

void Wizard::setMana(int m) {
    mana = m;
}
