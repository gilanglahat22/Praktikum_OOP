// Nama  : Muhammad Gilang Ramadhan
// NIM   : 13520137
// NO 4
// 24 Februari 2022

#include "MagicWarrior.hpp"
#include <bits/stdc++.h>

using namespace std;

MagicWarrior::MagicWarrior(std::string name) : Hero(name) {
    //
}
void MagicWarrior::attack(Hero* h) {
    h -> setHealth(h -> getHealth() - this->power);
}
void MagicWarrior::heal(Hero* h) {
    h -> setHealth(h -> getHealth() + this->power/2);
}
void MagicWarrior::magicAttack(Hero* h) {
    h -> setHealth(h -> getHealth()/2);
}
void MagicWarrior::powerUp() {
    this -> setPower(this->power*2);
}