// Nama : Muhammad Gilang Ramadhan
// NIM  : 13520137
// Deskripsi : BigNumber.cpp

#include "BigNumber.hpp"
#include <bits/stdc++.h>
using namespace std;

const int BigNumber::max_digit = 20;

BigNumber::BigNumber() {
  this->digit = new int[BigNumber::max_digit];
}

BigNumber::BigNumber(int number) {
  this->digit = new int[BigNumber::max_digit];
  for (int i = 0; i < BigNumber::max_digit; i++) {
    this->digit[i] = number % 10;
    number /= 10;
  }
}

BigNumber::BigNumber(string aVeryBigNumber) {
  this->digit = new int[BigNumber::max_digit];
  int strSize = aVeryBigNumber.size();
  for (int i = 0; i < strSize; i++) {
    this->digit[i] = aVeryBigNumber[strSize - 1 - i] - '0';
  }
}

BigNumber::BigNumber(const BigNumber& bn) {
  this->digit = new int[BigNumber::max_digit];
  for (int i = 0; i < BigNumber::max_digit; i++) {
    this->digit[i] = bn[i];
  }
}

int BigNumber::getMaxDigit() {
  return BigNumber::max_digit;
}

void BigNumber::setDigit(int i, int digit) {
  this->digit[i] = digit;
}

int& BigNumber::operator[](int i) {
  return this->digit[i];
}

int BigNumber::operator[](int i) const {
  return this->digit[i];
}

BigNumber::~BigNumber() {
  delete[] this->digit;
}

// hint   : gunakan operator overload [] untuk mengakses digit
// contoh : other[i]
// hint   : untuk this, dapat langsung menggunakan this->digit[i]
bool BigNumber::operator==(const BigNumber& other) {
  for (int i = BigNumber::getMaxDigit() - 1; i >= 0; i--) {
    if (this->digit[i] != other[i]) { 
      return false; 
    }
  }
  return true;
}

bool BigNumber::operator<(const BigNumber& other) {
  int number1 = 0; 
  int number2 = 0;
  for (int i = BigNumber::getMaxDigit() - 1; i >= 0; i--) {
    number1 += this->digit[i] * pow(10, i);
  }
  for (int i = BigNumber::getMaxDigit() - 1; i >= 0; i--) {
    number2 += other[i] * pow(10, i);
  }
  return number1 < number2;
}

bool BigNumber::operator>(const BigNumber& other) {
  int Number1 = 0; 
  int Number2 = 0;
  for (int i = BigNumber::getMaxDigit() - 1; i >= 0; i--) {
    Number1 += this->digit[i] * pow(10, i);
  }
  for (int i = BigNumber::getMaxDigit() - 1; i >= 0; i--) {
    Number2 += other[i] * pow(10, i);
  }
  return Number1 > Number2;
}

BigNumber BigNumber::operator+(const BigNumber& other) {
  BigNumber c;
  // hint: gunakan operator overload [] untuk mengakses dan mengubah digit
  // contoh:
  // - c[i] = this->digit[i]
  // - c[i] = other[i] 
  int TEMPorary = 0;
  for (int i = 0; i < BigNumber::getMaxDigit(); i++) {
    int hasil = this->digit[i] + other[i] + TEMPorary;
    if (hasil >= 10) {
      TEMPorary = 1;
      hasil -= 10;
    } else {
      TEMPorary = 0;
    }
    c[i] = hasil;
  }
  return c;
}