// Nama      : Muhammad Gilang Ramadhan
// NIM       : 13520137
// Deskripsi : SubstractExpression.cpp
// 17 Februari 2022

#include <bits/stdc++.h>
#include "SubstractExpression.hpp"

SubstractExpression::SubstractExpression(Expression * A1, Expression * A2) : BinaryExpression(A1, A2) {}

int SubstractExpression::solve() {
	return x->solve() - y->solve();
}