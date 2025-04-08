#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"
#include <string>
using namespace std;

class Wizard : public player
{
private:
    int mana;
public:
    Wizard(int mana, string name, int health, int damage);
    void castSpell (player* opponent);
    int getMana(int mana);
    void setMana(int mana);
 
};


#endif