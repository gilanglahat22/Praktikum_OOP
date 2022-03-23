// Nama      : Muhammad Gilang Ramadhan
// NIM       : 13520137
// Deskripsi : AddExpression.cpp
// 17 Februari 2022

#include<bits/stdc++.h>
#include "AddExpression.hpp"

AddExpression::AddExpression(Expression * A1, Expression * A2) : BinaryExpression(A1, A2) {}

int AddExpression::solve() {
	return x->solve() + y->solve();
}