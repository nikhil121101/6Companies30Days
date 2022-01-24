class Solution {
public:
    
    bool isCycle(vector<vector<int>> &adj, int i, vector<int> &color) {
        color[i] = 1;
        for(int j: adj[i]) {
            if(color[j] == 1) {
                return true;
            }
            if(color[j] == 0) {
                if(isCycle(adj, j, color)) {
                    return true;
                }
            }
        }
        color[i] = 2;
        return false;
    }
    
    void dfs(vector<vector<int>> &adj, int i, vector<int> &topo, vector<int> &vis) {
        vis[i] = 1;
        for(int j: adj[i]) {
            if(!vis[j])
                dfs(adj, j, topo, vis);
        }
        topo.push_back(i);
    }
    
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(n);
        for(vector<int> preq: prerequisites) {
            adj[preq[1]].push_back(preq[0]);
        }
        vector<int> color(n);
        for(int i = 0; i < n; i++) {
            if(!color[i] && isCycle(adj, i, color)) {
                return {};
            }
        }
        vector<int> vis(n);
        vector<int> topo;
        for(int i = 0; i < n; i++) {
            if(!vis[i])
                dfs(adj, i, topo, vis);
        }
        reverse(topo.begin(), topo.end());
        return topo;
    }
};