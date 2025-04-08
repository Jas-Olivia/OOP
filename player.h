#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;



class player
{
protected:
    string name;
    int health;
    int damage;

public:
    player();
    player(string name, int health, int damage);
    void attack(player* opponent, int damage);
    void takeDamage(int damage);
    string getName(string name);
    void setName(string name);
    int getHealth(int health);
    void setHealth(int health);
    int getDamage(int damage);
    void setDamage(int damage);
};

#endif
