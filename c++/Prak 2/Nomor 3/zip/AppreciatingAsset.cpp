// Nama : Muhammad Gilang Ramadhan
// NIM  : 13520137
// AppreciatingAsset.cpp
// 24 Februari 2022

#include "AppreciatingAsset.hpp"
#include <bits/stdc++.h>
using namespace std;

double AppreciatingAsset::getValue(int years)
{
  return pow(1 + rate, years) * x->getValue(years);
}