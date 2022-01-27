class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        vector<vector<int>> dp(a+1, vector<int>(b+1));
        for(int i = 1; i <= a; i++) {
            for(int j = 1; j <= b; j++) {
                if(i == 1 && j == i)
                    dp[i][j] = 1;
                else
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[a][b];
    }
};