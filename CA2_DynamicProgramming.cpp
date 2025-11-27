#include <iostream>
#include <vector>

using namespace std;


// Fibonacci - Recursion
int fibRecursion(int n) {
	if (n <= 1) {
		return n;
	}
	return fibRecursion(n - 1) + fibRecursion(n - 2);
}

// Fibonacci - Memoization
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


// Fibonacci - Tabulation
int fibTab(int n) {
	if (n <= 1) {
		return n;

	}
	vector<int> dp(n + 1);

	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];

	}
	return dp[n];
	
}


int main() {
	int n = 10;

	// Test for normal recursion
	cout << "Fibonacci Recursive :" << fibRecursion(n) << endl;

	//Test memoization
	vector<int> memo(n + 1, -1);
	cout << "Fibonacci Memozation :" << fibMemo(n, memo) << endl;

	//Test Tabulation
	cout << "Fibonacci Tabulation: " << fibTab(n) << endl;

	return 0; 
}