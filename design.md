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

