// Nama      : Muhammad Gilang Ramadhan
// NIM       : 13520137
// Deskripsi : NegativeExpression.cpp
// 17 Februari 2022

#include<bits/stdc++.h>
#include "NegativeExpression.hpp"

NegativeExpression::NegativeExpression(Expression * A1) : UnaryExpression(A1) {}

int NegativeExpression::solve() {
	return (-1) * x->solve();
}