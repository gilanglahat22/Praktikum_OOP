#include "Animal.hpp"
#include "Chicken.hpp"
#include "Dog.hpp"
#include <bits/stdc++.h>
using namespace std;

int main(){
    Dog* dog1 = new Dog(0);
    Chicken* chicken1 = new Chicken();
    Chicken* chicken2 = new Chicken();
    Animal* animal1 = new Animal(*chicken1);
    chicken1->~Chicken();
    animal1->feed();
    chicken2->walk();
    animal1->walk();
    dog1->walk();
    chicken2->breed();
    chicken2->~Chicken();
    Dog* dog2 = new Dog(1);
    dog2->Animal::breed();
    dog2->~Dog();
    animal1->~Animal();
    chicken2->Chicken::~Chicken();
    dog1->~Dog();
    return 0;
}