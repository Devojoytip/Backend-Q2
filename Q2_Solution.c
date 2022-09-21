#include <stdio.h>
#include <stdlib.h>

// Appraoch - Dynamic Programming Memoization
int func(int n, int *dp)
{
    // Base Case
    if (n == 0 || n == 1 || n == 2)
    {
        return dp[n] = n;
    }

    if (n < 0)
    {
        return -1;
    }

    if (dp[n] != 0)
    {
        return dp[n];
    }

    int ans = func(n - 3, dp) + func(n - 2, dp);
    return dp[n] = ans;
}

int main()
{
    int n;
    printf("Enter the no : ");
    scanf("%d", &n);
    int dp[1000] = {0};
    int a = func(n, dp);

    printf("%d", a);
}