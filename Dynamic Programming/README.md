# Dynamic Programming
- DP is a useful technique for optimization problems, those problems that seek the maximum or minimum solution given certain constraints, because it looks through all possible sub-problems and never recomputes the solution to any sub-problem.
- It is both a mathematical optimization technique. - **wikipedia**
- Dynamic programming refers to a problem-solving approach, in which we precompute and store simpler, similar subproblems, in order to build up the solution to a complex problem. - **birilliant**
- Dynamic programming amounts to breaking down an optimization problem into simpler sub-problems, and storing the solution to each sub-problem so that each sub-problem is only solved once. - **freecodecamp**

## Approach
| ![](images/DynamicProgramming.jpg) | 
|:--:| 
| Source: *geeksforgeeks* |

## Un-Optimized Fibonacci
- Consider the case of calculating $n^{th}$ fibonacci number
```cpp
int fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
```
- above code is a recurrsive implementation of calculating $n^{th}$ fibonacci number
### Time Complexity
| ![](images/fib.png) | 
|:--:| 
| Recursive Calls in case of fibonacci($5$) |
- Consider the above case of calculating $n^{th}$ fibonacci number
- No. of levels = n
- Height of the tree = n
- No. of calls = $2^{n-1}$
- **Time Complexity** = O($2^{n-1}$) = O($2^{n}$)

| ![](images/fib_time.png) | 
|:--:| 
| Source: *freecodecamp* |

### Space Complexity
- Consider the above case of calculating $n^{th}$ fibonacci number
- Maximum Total No. of stacks at an instant
- Depth of the tree = n levels = Height of the tree
- **Space Complexity** = O($n$) = O($n$)

## Memoization
- No re-computation
- In computing, memoization or memoisation is an optimization technique used primarily to speed up computer programs by storing the results of expensive function calls and returning the cached result when the same inputs occur again. - **wikipedia**
- Transform the results of a function into something to remember
- Storing solutions of sub-problems, when a solution of them is requested then can be given directly from the storage instead of calculating it again.

### Fibonacci - Memoization
```cpp
vector<int> fib_dp(100000000,-1);

int fibonacci(int n){
    if(fib_dp[n]==-1){
        fib_dp[n] = fibonacci(n-1)+fibonacci(n-2); 
    }
    return fib_dp[n];
```
#### Time Complexity
| ![](images/fib_mem.png) | 
|:--:| 
| Source: *freecodecamp* |
- No. of levels = n
- Height of the tree = n
- No. of calls = $2n-3$
- **Time Complexity** = O($2n$) = O($n$)
### Space Complexity
- Maximum Total No. of stacks at an instant
- Depth of the tree = n levels = Height of the tree
- **Space Complexity** = O($n$) = O($n$)

## Tabulation

## References
- https://www.freecodecamp.org/news/demystifying-dynamic-programming-3efafb8d4296/
- https://en.wikipedia.org/wiki/Memoization
- https://www.geeksforgeeks.org/dynamic-programming/#concepts
- [FreeCodeCamp - Dynamic Programming - Learn to Solve Algorithmic Problems & Coding Challenges](https://www.youtube.com/watch?v=oBt53YbR9Kk)