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


// Knapsack
int knapsack(int W, vector<int>& weights, vector<int>& values, int n) {
	vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= W; j++) {

			if (weights[i - 1] > j) {
				dp[i][j] = dp[i - 1][j];
			}
			else {
				int notTake = dp[i - 1][j];

				int take = values[i - 1] + dp[i - 1][j - weights[i - 1]];

				dp[i][j] = max(take, notTake);
			}
		}
	}

	return dp[n][W];
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

	//Test knapsack
	vector<int> weights = { 1,3,4,5 };
	vector<int> values = { 1,4,5,7 };
	int capacity = 7;

	cout << "Knapsack max value: " << knapsack(capacity, weights, values, weights.size()) << endl;

	return 0; 
}