int climbStairs(int n) 
{
    int ans = 0;
    if(n == 0||n == 1)
    return 1;

    int* dp = (int*)malloc((n + 1) * sizeof(int));
    dp[0] = 1;
    dp[1] = 1;
    int i = 0;
    for(i = 2;i <= n;i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    ans = dp[n];
    free(dp);
    return ans;
}