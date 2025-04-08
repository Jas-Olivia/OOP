#include "player.h"
#include <string>
#include <iostream>
using namespace std;



player::player(string name, int health, int damage){
    this->name = name;
    this->health = health;
    this->damage = damage;
    

}


void player::attack(player* opponent, int damage){
    cout <<name<< " is attacking" << opponent->getName(name)<< " for "<< damage << " damage."<<endl;
    opponent->takeDamage(damage);

}

void player::takeDamage(int damage){
    health -= damage;

    cout << name << "Takes " << damage << "damage." << endl; 
    cout << name << "Health: " << health << endl;

}

string player::getName(string name) {
    return name;
}
void player::setName(string n) {
     name = n;
}

int player::getHealth(int health) {
    return health;
}

void player::setHealth(int h) {
    health = h;
}

int player::getDamage(int damage) {
    return damage;
}

void player::setDamage (int d) {
    damage = d;
}