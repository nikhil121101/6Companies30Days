class Solution {
public:
    
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    
    void fill(vector<vector<int>> &height, int n, int m, int c,
              queue<pair<int, int>> &q, vector<vector<int>> &color) {
        
        while(!q.empty()) {
            auto [i, j] = q.front(); q.pop();
            for(int k = 0; k < 4; k++) {
                int x = i + dx[k], y = j + dy[k];
                if(x >= 0 && x < n && y >= 0 && y < m &&
                  !(color[x][y]&c) && 
                  height[x][y] >= height[i][j]) {
                    q.push({x, y});
                    color[x][y] |= c;
                }
            }
        }
    }
    
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& height) {
        int n = height.size(), m = height[0].size();
        vector<vector<int>> color(n, vector<int>(m));
        
        queue<pair<int, int>> q;
        for(int i = 0; i < n; i++) {
            q.push({i, 0});
            color[i][0] |= 1;
        }
        for(int i = 0; i < m; i++) {
            q.push({0, i});
            color[0][i] |= 1;
        }
        fill(height, n, m, 1, q, color);
        
        
        for(int i = 0; i < n; i++) {
            q.push({i, m-1});
            color[i][m-1] |= 2;
        }
        for(int i = 0; i < m; i++) {
            q.push({n-1, i});
            color[n-1][i] |= 2;
        }
        fill(height, n, m, 2, q, color);
        
        
        vector<vector<int>> res;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(color[i][j] == 3)
                    res.push_back({i, j});
            }
        }
        
        return res;
    }
};