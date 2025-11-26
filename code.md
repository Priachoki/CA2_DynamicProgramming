# Fibonacci using recursion
F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2). 
<img width="738" height="108" alt="image" src="https://github.com/user-attachments/assets/738d1416-96e1-4d2b-8fb1-7d1dd613b8e2" />
In simple terms every number after the first two numbers is made by adding the sum of the two previous numbers before it.

# Fibinacci using memoization 
<img width="454" height="192" alt="image" src="https://github.com/user-attachments/assets/089cd9d1-f384-4f05-bed2-50e24a2ea0d0" />
 This is a more improved version of the recursion code we did earlier since unlike the normal recursion it does not repeat the same calculation. With memoization we create a memo vector that stores Fibonacci values the first time they are computed.
 If the function needs the same value again instead of calculating it again it just reurns it from the memo table. This changes the time complexity from O(2ⁿ) to O(n) since there is no repeation
