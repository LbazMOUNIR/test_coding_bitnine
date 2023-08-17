#include <stdio.h>

// Recursive Approach
int fib_recursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    return fib_recursive(n - 3) + fib_recursive(n - 2);
}

// Memoization (Top-down Dynamic Programming)
int memo[100]; // Assuming n <= 100

int fib_memoization(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    if (memo[n] != -1) return memo[n];

    memo[n] = fib_memoization(n - 3) + fib_memoization(n - 2);
    return memo[n];
}

// Iterative Approach (Bottom-up Dynamic Programming)
int fib_iterative(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    int i;
    for (i = 3; i <= n; ++i) {
        dp[i] = dp[i - 3] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n ;
    printf("Enter the value for which you want to calculate fib: ");
    scanf("%d", &n);

    printf("Recursive: F(%d) = %d\n", n, fib_recursive(n));

    int i;
    for (i = 0; i < 100; ++i) memo[i] = -1;
    printf("Memoization: F(%d) = %d\n", n, fib_memoization(n));

    printf("Iterative: F(%d) = %d\n", n, fib_iterative(n));

    return 0;
}
