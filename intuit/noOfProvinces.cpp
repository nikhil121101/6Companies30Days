class Solution {
public:
    
    void dfs(int s, vector<int> &vis, vector<vector<int>> &adj_matrix, int n) {
        vis[s] = 1;
        for(int i = 0; i < n; i++) {
            if(adj_matrix[s][i])
                if(!vis[i])
                    dfs(i, vis, adj_matrix, n);
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n);
        int res = 0;
        for(int i = 0; i < n; i++) {
            if(!vis[i]) {
                res++;
                dfs(i, vis, isConnected, n);
            }
        }
        return res;
    }
};