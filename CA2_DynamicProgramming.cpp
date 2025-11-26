#include <iostream>
#include <vector>

using namespace std;

int fibRecursion(int n) {
	if (n <= 1) {
		return n;
	}
	return fibRecursion(n - 1) + fibRecursion(n - 2);
}

int fibMemo(int n, vector<int>& memo) {
	if (n <= 1) {
		return n;
	}
	if (memo[n] != -1) {    
		return memo[n];
	}

	memo[n] = fibMemo(n - 1, memo) + fibMemo(n - 2, memo);
	return memo[n];
}

int main() {
	int n = 10;

	// Test for normal recursion
	cout << "Fibonacci Recursive :" << fibRecursion(n) << endl;

	//Test memoization
	vector<int> memo(n + 1, -1);
	cout << "Fibonacci Memozation :" << fibMemo(n, memo) << endl;

	return 0; 
}