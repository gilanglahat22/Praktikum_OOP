#include "WarungSaltedEgg.hpp"
#include <bits/stdc++.h>

// Masukan: Jumlah uang, nasi, telur, telur asin, dan ayam
WarungSaltedEgg::WarungSaltedEgg(int uang, int nasi, int telur, int telurAsin, int ayam) : WarungNasi(uang, nasi, telur){
    this->telurAsin = telurAsin;
    this->ayam = ayam;
}

// Resep Nasi Ayam Salted Egg
//     1 Nasi
//     1 Telur
//     3 Telur Asin
//     1 Ayam
// Jika bahan yang dibutuhkan kurang, kembalikan false.
// Jika cukup, hitung pendapatan total. Pendapatan total dihitung dengan jumlah pesanan dikali 30000
// Setelah itu, tambahkan pendapatan total ke uang. Kembalikan true.
bool WarungSaltedEgg::masak(int pesanan){
    if (getNasi() < pesanan && getTelur() < pesanan && this->telurAsin < pesanan*3 && this->ayam < pesanan) {
        return false;
    } else {
        int pendapatan = pesanan * 30000;
        setUang(getUang() + pendapatan);
        return true;
    }
}