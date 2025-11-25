# Design - Dynamic Programming

# Introduction to Dynamic Programming and how it works

# 1. The Problem: Naive Recursion
Let's use Fibonacci as an example which is a common recursion question. The naive recursive approach:

```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
```
```
What happens when we call fib(5)?

                         fib(5)
                        /      \
                   fib(4)        fib(3)
                  /      \       /     \
             fib(3)   fib(2) fib(2)  fib(1)
            /     \    /   \   /   \
        fib(2) fib(1) f(1) f(0) f(1) f(0)
        /   \
     fib(1) fib(0)
```


The Problem:

fib(3) is calculated 2 times
fib(2) is calculated 3 times
fib(1) is calculated 5 times

The time complexity for this is exponential time(O(2^n)), which is super slow. 

# 2. Solution #1: Memoization (Top-Down)

```cpp
int fib(int n, vector<int>& memo) {
    if (n <= 1) return n;
    
    if (memo[n] != -1) return memo[n];  
    
    memo[n] = fib(n-1, memo) + fib(n-2, memo);
    return memo[n];
}
```


```
                       fib(5)
                        /      \
                   fib(4)        fib(3) ✓ (cached!)
                  /      \       
             fib(3)   fib(2) ✓ (cached!)
            /     \    
        fib(2) fib(1) ✓ (cached!)
        /   \
     fib(1) fib(0) ✓ (cached!)

Memo table: [-1, 1, 1, 2, 3, 5]
```

Result: Each subproblem solved only once. Time complexity: O(n)

# 3. Solution #2: Tabulation (Bottom-Up)


```cpp
int fib(int n) {
    if (n <= 1) return n;
    
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    return dp[n];
}
```

```
Start:    [0, 1, _, _, _, _]
           ↑  ↑
         base cases

Step 1:   [0, 1, 1, _, _, _]
                   ↑
              0+1 = 1

Step 2:   [0, 1, 1, 2, _, _]
                      ↑
                 1+1 = 2

Step 3:   [0, 1, 1, 2, 3, _]
                         ↑
                    1+2 = 3

Step 4:   [0, 1, 1, 2, 3, 5]
                            ↑
                       2+3 = 5
```

Result: Each subproblem solved once, no recursion. Time complexity: O(n)

# 4. Memoization vs Tabulation

| Feature     | Memoization                | Tabulation              |
|-------------|----------------------------|-------------------------|
| Direction   | Top-down (recursive)       | Bottom-up (iterative)   |
| When to use | Natural recursive problems | All subproblems needed  |
| Code style  | Easier to write            | More efficient          |

