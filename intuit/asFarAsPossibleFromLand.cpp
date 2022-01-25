class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int, int>> q; 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j]) {
                    q.push({i, j});
                }
            }
        }
        
        if(q.size() == 0 || q.size() == n*n)
            return -1;
        
        int dx[4] = {0, 0, -1, 1};
        int dy[4] = {1, -1, 0, 0};
        
        int d = 0;
        while(!q.empty()) {
            int sz = q.size();
            for(int itr = 0; itr < sz; itr++) {
                auto [i, j] = q.front(); q.pop();
                for(int k = 0; k < 4; k++) {
                    int x = i + dx[k], y = j + dy[k];
                    if(x >= 0 && x < n && y >= 0 && y < n &&
                      grid[x][y] == 0) {
                        grid[x][y] = 1;
                        q.push({x, y});
                    }
                }
            }
            d++;
        }
        return d-1;
    }
};