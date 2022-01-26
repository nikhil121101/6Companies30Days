class Solution
{
public:
    int score(vector<int> &piles, int l, int r, vector<vector<int>> &dp)
    {
        if (l == r)
            return piles[l];
        if (dp[l][r] != INT_MAX)
            return dp[l][r];

        return dp[l][r] = max(
                   piles[l] - score(piles, l + 1, r, dp),
                   piles[r] - score(piles, l, r - 1, dp));
    }

    bool stoneGame(vector<int> &piles)
    {
        int n = piles.size();
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        return score(piles, 0, n - 1, dp) > 0;
    }
};