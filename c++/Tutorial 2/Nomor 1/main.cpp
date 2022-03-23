// Nama      : Muhammad Gilang Ramadhan
// NIM       : 13520137
// Deskripsi :TUTORIAL 2
// 17 Februari 2022

#include <bits/stdc++.h>
#include "Bike.h"
#include "Car.h"
using namespace std;

int main()
{
    Car *c1 = new Car(4);
    Car *c2 = new Car(10);
    Bike *b1 = new Bike();
    Vehicle *v1 = new Vehicle(*b1);
    b1 -> ~Bike();
    c2 -> Vehicle::drive();
    v1 -> clean();
    c1 -> drive();
    v1 -> park();
    c2 -> ~Car();
    v1 -> ~Vehicle();
    c1 -> ~Car();
	return 0;
}