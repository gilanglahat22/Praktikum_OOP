// Nama : Muhammad Gilang Ramadhan
// NIM  : 13520137
// Deskripsi Soal Nomor 2, Main.cpp

#include <bits/stdc++.h>
#include "Card.hpp"
using namespace std;

int main(){
    Card* bank1 = new Card(1);
    Card* bank2 = new Card();
    Card* bank3 = new Card(2);
    *bank2 = *bank1;
    bank1->gesek();
    Card* bank4 = new Card(*bank3);
    bank4->gesek();
    bank1->~Card();
    bank3->~Card();
    bank4->~Card();
    bank2->~Card();
    return 0;
}