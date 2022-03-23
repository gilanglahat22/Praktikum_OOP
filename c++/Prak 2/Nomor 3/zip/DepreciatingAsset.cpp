// Nama : Muhammad Gilang Ramadhan
// NIM  : 13520137
// DepreciatingAsset.cpp
// 24 Februari 2022

#include "DepreciatingAsset.hpp"
#include <bits/stdc++.h>
using namespace std;

double DepreciatingAsset::getValue(int years)
{
  return pow(1 - rate, years) * x->getValue(years);
}