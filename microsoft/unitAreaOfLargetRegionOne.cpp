class Solution
{   
    public:
    
    bool valid(int i, int j, int n, int m) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }
    
    int dx[8] = {1, -1, 0, 0, 1, -1, 1, -1};
    int dy[8] = {0, 0, 1, -1, 1, 1, -1, -1};
    
    int dfs(vector<vector<int>> &grid, int n, int m, int i, int j) {
        if(!valid(i, j, n, m) || !grid[i][j])
            return 0;
            
        grid[i][j] = 0;
        
        int ans = 1;
        
        for(int k = 0; k < 8; k++) {
            int x = i + dx[k], y = j + dy[k];
            ans += dfs(grid, n, m, x, y);
        }
        
        return ans;
    }
    
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                ans = max(ans, dfs(grid, n, m, i, j));
            }
        }
        return ans;
    }
};