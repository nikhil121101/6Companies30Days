class Solution {
public:
    int cost(int l, int r, vector<vector<int>> &dp) {
        if(l >= r)
            return 0;
        if(dp[l][r])
            return dp[l][r];
        int minCost = INT_MAX;
        for(int i = l; i <= r; i++) {
            minCost = min(minCost, i + max(cost(l, i-1, dp), cost(i+1, r, dp)));
        }
        return dp[l][r] = minCost;
    }
    
    int getMoneyAmount(int n) {
        vector<vector<int>> dp(n+1, vector<int>(n+1));
        int res = cost(1, n, dp);
        return res;
    }
};