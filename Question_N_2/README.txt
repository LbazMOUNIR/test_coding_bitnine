Implementation 1: Recursive Approach

Explanation:
The recursive approach directly follows the given recurrence relation.
It's simple to understand and write. However, this approach suffers from exponential 
time complexity due to repeated calculations of the same values. 
This can result in a high number of redundant function calls, leading to performance issues.

Implementation 2: Memoization (Top-down Dynamic Programming):

Explanation:
Memoization is a technique to improve the recursive approach's performance. 
It stores the results of already computed subproblems in the memo array to avoid redundant calculations. 
This greatly reduces the time complexity, making the solution much faster.
However, it requires additional space for the memo array, and there's still some overhead due to function calls.

Implementation 3: Iterative Approach (Bottom-up Dynamic Programming):

Explanation:
The iterative approach uses an array dp to store the results of subproblems iteratively, starting from the base cases. 
This approach has a linear time complexity and is generally more efficient than the pure recursive approach. 
It doesn't involve the function call overhead that recursive approaches have, making it better for larger values of n. 
However, it requires space proportional to n for the dp array.


Summary:
Recursive Approach: Simple to understand but inefficient due to exponential time complexity.

Memoization (Top-down DP): Efficient due to avoiding redundant calculations, 
                           but requires additional space for memoization.

Iterative Approach (Bottom-up DP): Efficient with linear time complexity, doesn't have function 
                                   call overhead, but requires space for the dynamic programming array.