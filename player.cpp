#include "player.h"
#include <string>
#include <iostream>
using namespace std;


Player::Player(string name, int health, int damage){
    this->name = name;
    this->health = health;
    this->damage = damage;
    

}


void Player::attack(Player* opponent, int damage){
    cout <<name<< " is attacking" << opponent->getName()<< " for "<< damage << " damage."<<endl;
    opponent->takeDamage(damage);

}

void Player::takeDamage(int damage){
    health -= damage;

    cout << name << "Takes " << damage << "damage." << endl; 
    cout << name << "Health: " << health << endl;

}

string Player::getName() {
    return name;
}
void Player::setName(string n) {
     name = n;
}

int Player::getHealth() {
    return health;
}

void Player::setHealth(int h) {
    health = h;
}

int Player::getDamage() {
    return damage;
}

void Player::setDamage (int d) {
    damage = d;
}