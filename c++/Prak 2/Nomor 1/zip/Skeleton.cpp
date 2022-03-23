// Nama  : Muhammad Gilang Ramadhan
// NIM   : 13520137
// NO 1
// 24 Februari 20222

#include "Skeleton.hpp"
#include <bits/stdc++.h>
using namespace std;

Skeleton::Skeleton(int _stamina, int _arrow) : Undead(_stamina) {
  this->stamina = _stamina;
  this->arrow = _arrow;
}

void Skeleton::attack(Player& player) {
    if (this->stamina){
        if (this->arrow && this->stamina >= 2){
            this->arrow --;
            this-> stamina-=2;
            player.setHealth(max(player.getHealth() - 4, 0));
        }
        else{
            this->stamina --;
            player.setHealth(max(player.getHealth() - 1, 0));
            cout << "switching to your fists is faster than reloading" << endl; 
        }
    }
}
