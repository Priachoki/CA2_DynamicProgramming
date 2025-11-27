In this section we analyse the time and space complexity of the algorithms used in our project: Fibonacci (Recursion, Memoization, Tabulation) and the 0/1 Knapsack problem.
The goal is to show how dynamic programming improves performance by reducing repeated calculations like in recurssion
Dynamic Programming significantly improves performance by avoiding repeated work. These tables compare the naive recursion approach with the DP versions.


## 1. Fibonacci - Naive Recursion
| Case         | Time Complexity | Space Complexity | Explanation |
|--------------|-----------------|------------------|-------------|
| Best Case    | O(1)            | O(n)             | When n = 0 or n = 1  |
| Average Case | O(2ⁿ)           | O(n)             | Recursion splits into 2 calls each time |
| Worst Case   | O(2ⁿ)           | O(n)             | For large n, exponential growth |

## 2. Fibonacci - Memoization (Top_Down DP)
| Case         | Time Complexity | Space Complexity | Explanation |
|--------------|-----------------|------------------|-------------|
| Best Case    | O(1)            | O(n)             | If n = 0 or n = 1 |
| Average Case | O(n)            | O(n)             | Each Fibonacci number computed once |
| Worst Case   | O(n)            | O(n)             | Still only computes each value once |

## 3. Fibonacci - Tabulation(Bottom-UP DP)
| Case         | Time Complexity | Space Complexity | Explanation |
|--------------|-----------------|------------------|-------------|
| Best Case    | O(1)            | O(n) or O(1)     | If n = 0 or n = 1 |
| Average Case | O(n)            | O(n) or O(1)     | Loop runs from 2 to n |
| Worst Case   | O(n)            | O(n) or O(1)     | Always linear time |

## 4. 0/1 Knapsack
| Case         | Time Complexity | Space Complexity | Explanation |
|--------------|-----------------|------------------|-------------|
| Best Case    | O(n × W)        | O(n × W)         | DP always fills table; no shortcuts |
| Average Case | O(n × W)        | O(n × W)         | Depends on items and capacity |
| Worst Case   | O(n × W)        | O(n × W)         | Always fills entire DP table |

From the tables we can see that Dynamic Programming reduces the Fibonacci problem 
from exponential time O(2ⁿ) to linear time O(n). For Knapsack, DP reduces the brute-force 
O(2ⁿ) to O(n × W). This shows exactly why DP is preferred for problems with overlapping subproblems and optimal substructure.
