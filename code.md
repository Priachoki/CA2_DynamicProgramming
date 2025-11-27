# Fibonacci using recursion
F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2). 
<img width="738" height="108" alt="image" src="https://github.com/user-attachments/assets/738d1416-96e1-4d2b-8fb1-7d1dd613b8e2" /><br/>
In simple terms every number after the first two numbers is made by adding the sum of the two previous numbers before it.

# Fibinacci using memoization (Top-Down)
<img width="454" height="192" alt="image" src="https://github.com/user-attachments/assets/089cd9d1-f384-4f05-bed2-50e24a2ea0d0" /> <br/>
 This is a more improved version of the recursion code we did earlier since unlike the normal recursion it does not repeat the same calculation. With memoization we create a memo vector that stores Fibonacci values the first time they are computed.
 If the function needs the same value again instead of calculating it again it just reurns it from the memo table. This changes the time complexity from O(2ⁿ) to O(n) since there is no repeation

# Fibonacci using Tabulation
It is the bottom up version of dynamic programming. Instead of using recursion, Create a dp array and fill it from the smallest going upward. <br/> <img width="398" height="182" alt="image" src="https://github.com/user-attachments/assets/b83b313b-c4fc-4973-9a98-f66f79c03841" />  <br>
Start by setting dp[0] = 0 and dp[1] = 1 then using the fibonacci formula dp[i] = dp[i-1] + dp[i-2]. By the time the loop reaches i = n, the table already has all smaller Fibonacci values.This method is very fast because it does not repeat work and does not use recursion.

# 0/1 Knapsack
The 0/1 Knapsack problem chooses a set of items that maximizes total value without exceeding the weight capacity. Each item can either be taken (1) or not taken (0), which is why it is called “0/1”.

-To solve it using dynamic programming, I created a 2D dp table:

-Rows represent the number of items considered (0 to n)

-Columns represent capacity values from 0 to j

Each cell dp[i][j] stores the maximum value achievable using the first i items with a capacity limit of j

At each step, I choose between:

1) Not taking the item- keep the value from the row above: dp[i-1][j]

2) Taking the item - add the item’s value to the best value for the remaining capacity:  <br/> <img width="407" height="32" alt="image" src="https://github.com/user-attachments/assets/169a811b-bd55-4946-89db-ed08253d7bcd" /> <br/>
The dp table stores the optimal result for every subproblem, and the final answer is in: dp[n][W]
