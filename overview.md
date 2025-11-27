# What is Dynamic Programming

Dynamic Programming is an algorithm technique used to optimize recursive solutions when same subproblems are called again. The main idea is to store solutions to subproblems so that each is solved once.
The main idea of dynamic programming is to consider a significant problem and breaking it into smaller, individualized components. When it comes to implementation, optimal techniques rely on data storage and reuse to increase algorithm efficiency.  
In simpler terms: **DP = recursion + caching.**

---

## Why We chose Dynamic Programming
- The main reason why we chose Dynamic Programming is because we wanted to get a better understanding of recursion, which we found a bit confusing in class, and also learn how Dynamic Programming improves it.
- We also settled on Dynamic Programming because it is used in many real-life problems such as planning, searching, and optimization. 
---

## Importance of Dynamic Programming

-	Improves efficiency for problems with repeated substructures.
-	Provide a systematic way to optimize recursive solutions.
-	Transform exponential time problems into polynomial time solutions.

---

## When to use Dynamic Programming

###	Optimal Substructure 
We use the optimal results of subproblems to achieve the optimal result of the bigger problem. Example: Shortest paths, knapsack, LIS—each can be built from smaller optimal decisions.
### Overlapping Subproblems 
It’s used when the same subproblems are solved repeatedly in different parts of the problem. Example: Fibonacci numbers repeatedly compute the same two smaller Fibonacci values.

---

### Dynamic Programming is especially useful when:
  -	A brute force or naive recursive solution is exponential.
  -	You can express the problem as a recurrence.
  -	Decisions depend on smaller instances of the same problem.
---

## When Not to use Dynamic Programming
- When subproblems do not overlap, DP gives no advantage.
- When a greedy solution already gives the correct answer (e.g., fractional knapsack).
- When memory is limited, because DP tables may use extra space.
- When a simple iterative or recursive solution is fast enough.
---
## Approaches of Dynamic Programming

### Top-Down Approach (also known as Memoization)
This approach starts with the main problem and breaks it down into smaller subproblems recursively. It uses cache to store the results of subproblems as they are computed. Before computing a subproblem, the method checks if its solution is already in the cache to avoid redundant calculations. 
### Bottom-up approach (also known as Tabulation)
This approach starts by solving the smallest possible subproblems first. It iteratively builds up the solution to larger subproblems, storing the results in a table (often an array). The solution to the final problem is then found by combining the solutions of the subproblems in the table. 

---

## Real Use Cases of DP
Some of the applications are Optimization, Computer Science and Operations Research.
### 1.	Knapsack Problem 
Determines the maximum value of items that can be placed in a knapsack with a given capacity. DP solves it using a table that builds solutions for smaller capacities.( Optimization)
### 2.	Longest Increasing Subsequence
Find the longest strictly increasing subsequence in a list. DP stores the best possible LIS ending at each index. ( Computer Science ) 
### 3.	Edit Distance 

Compute how many edits are needed to transform one string into another. DP uses a 2D grid comparing prefixes of the two strings. (Computer Science)
---
## Comparision between Dynamic programming and other Techniques

| **Dynamic Programming**                                  | **Greedy**                                    |
|----------------------------------------------------------|-----------------------------------------------|
| Considers all possibilities by building from subproblems | Makes the locally optimal choice at each step |
| Ensures global optimality                                | May fail to reach global optimum              |
| Often uses tables or recursion with memoization          | Often iterative, simple and fast              |
| Knapsack passes                                          | Knapsack fails                                |

<br>

| **Dynamic Programming**                     | **Divide & Conquer**                       |
|---------------------------------------------|--------------------------------------------|
| Subproblems overlap                         | Subproblems are usually independent        |
| Stores results to avoid recomputation       | Solves subproblems separately              |
| Example: Fibonacci DP avoids repeated work  | Example: Merge Sort divides and combine    |

<br>

| **Dynamic Programming**                            | **Recursion**                                    |
|----------------------------------------------------|--------------------------------------------------|
| Subproblems overlap and are reused                 | Subproblems may repeat without reuse             |
| Stores results (memo/table) to avoid recomputation | Recomputes the same subproblems multiple times   |
| Efficient: usually polynomial time                 | Can be exponential (e.g., Fibonacci O(2^n))      |
| Often uses memoization or bottom-up tabulation     | Uses simple function calls with base cases       |
| Example: DP Fibonacci stores previous values       | Example: Recursive Fibonacci recomputes values   |


---
## Why Dynamic Programming Matters

Dynamic programming isn't a particular algorithm but a way of thinking. It breaks problems into smaller pieces, identifying patterns, and optimizing solutions. It not only improves algorithmic efficiency but also strengthens problem solving intuition. <br>

Understanding DP helps you:
-	Tackle complex optimization problems systematically.
-	Reduce exponential brute force solutions to polynomial time.
-	Approach interviews and real world problems with confidence.
-	Recognize when caching, reusing work, and building incrementally leads to better performance.
  
---
## Where Dynamic Programming Fits
Dynamic Programming is an algorithm paradigm that solves problems by breaking them into smaller subproblems and storing the results to avoid repeated work.

