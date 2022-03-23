// Nama : Muhammad Gilang Ramadhan
// NIM  : 13520137
// Nomor 3, item.cpp

#include "Item.hpp"
#include <bits/stdc++.h>
using namespace std;

int Item::totalItems = 0;
int Item::totalRevenue = 0;

Item::Item() : serialNum(totalItems + 1){
    this->stock = 0;
    this->price = 0;
    this->sold  = 0;
    this->totalItems = this->totalItems + 1;
}

Item::Item(int stock, int price) : serialNum(totalItems + 1){
    this->stock = stock;
    this->price = price;
    this->sold = 0;
    this->totalItems = this->totalItems + 1;
}

Item::Item(const Item& a): serialNum(a.serialNum){
    this->stock = a.stock;
    this->price = a.price;
    this->sold = a.sold;
    this->totalItems = this->totalItems + 1;
}

Item::~Item(){
}

int Item::getSerialNum() const {
    return this->serialNum;
}

int Item::getSold() const{
    return this->sold;
}

int Item::getPrice() const{
    return this->price;
}

void Item::addStock(int addedStock){
    if (addedStock > 0){
        this->stock += addedStock;
        this->totalItems++;
    }
}

void Item::sell(int soldStock){
    if ((this->stock - soldStock) >= 0){
        this->stock -= soldStock;
        totalRevenue += (soldStock * this->price);
        this->sold += soldStock;
    }
    else
    {
        totalRevenue += (this->stock * this->price);
        this->stock = 0;
        this->sold += this->stock;
    }
}

void Item::setPrice(int newPrice){
    this->price = newPrice;
}