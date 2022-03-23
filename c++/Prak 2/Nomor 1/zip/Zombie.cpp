// Nama  : Muhammad Gilang Ramadhan
// NIM   : 13520137
// NO 1
// 24 Februari 20222

#include "Zombie.hpp"
#include <bits/stdc++.h>
using namespace std;

Zombie::Zombie(int _stamina) : Undead(_stamina) {
  this->stamina = _stamina;
}

void Zombie::attack(Player& player) {
  if (this->stamina) {
    this->stamina--;
    if(player.getHealth() == 0){
        cout << "nom nom nom" << endl;
    }
    else{
        player.setHealth(max(player.getHealth() - 3, 0));
    }
  } else{
      cout << "oof" << endl;
  }
}