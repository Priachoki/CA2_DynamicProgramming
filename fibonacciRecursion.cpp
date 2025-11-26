#pragma once
#include <iostream>
using namespace std;

int fibRecursive(int n) {
	if (n <= 1) return n;
	return fibRecursive(n - 1) + fibRecursive(n - 2);
}