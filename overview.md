# What is Dynamic Programming

Dynamic Programming is an algorithm technique used to optimize recursive solutions when same subproblems are called again. The main idea is to store solutions to subproblems so that each is solved once.
The main idea of dynamic programming is to consider a significant problem and breaking it into smaller, individualized components. When it comes to implementation, optimal techniques rely on data storage and reuse to increase algorithm efficiency.  
In simpler terms: **DP = recursion + caching.**

## Importance of Dynamic Programming

•	Improves efficiency for problems with repeated substructures.
•	Provide a systematic way to optimize recursive solutions.
•	Transform exponential time problems into polynomial time solutions.

## When to use Dynamic Programming

•	Optimal Substructure - we use the optimal results of subproblems to achieve the optimal result of the bigger problem. Example: Shortest paths, knapsack, LIS—each can be built from smaller optimal decisions.
•	Overlapping Subproblems – it’s used when the same subproblems are solved repeatedly in different parts of the problem. Example: Fibonacci numbers repeatedly compute the same two smaller Fibonacci values.
Dynamic Programming is especially useful when:
  o	A brute force or naive recursive solution is exponential.
  o	You can express the problem as a recurrence.
  o	Decisions depend on smaller instances of the same problem.
