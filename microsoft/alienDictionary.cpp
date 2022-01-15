class Solution{
    public:
    
    void dfs(int v, vector<vector<int>> adj, int n, vector<bool> &visited,
                                    vector<int>& res) {
        visited[v] = true;
        for (int i = 0; i < n; i++)
            if (adj[v][i] && !visited[i])
                dfs(i, adj, n, visited, res);
        res.push_back(v);
    }
    
    vector<int> topSort(vector<vector<int>> &adj, int n) {
        vector<int> res;
        vector<bool> vis(n);
        for (int i = 0; i < n; i++)
            if (!vis[i])
                dfs(i, adj, n, vis, res);
        reverse(res.begin(), res.end());
        return res;
    }
    
    void fillAdj(string dict[], vector<vector<int>> &adj, int l, int r, int j) {
        if(l == r) 
            return;
        vector<int> num, ind;
        for(int i = l; i <= r; i++) {
            if(j < dict[i].length() &&
                (num.empty() || num.back() != dict[i][j]-'a')) {
                    num.push_back(dict[i][j]-'a');
                    ind.push_back(i);
            }
        }
        if(num.size() < 1)
            return;
        ind.push_back(r+1);
        for(int i = 0; i < num.size(); i++) {
            if(i < (int)num.size()-1) {
                adj[num[i]][num[i+1]] = 1;
                // cout << (char)(num[i]+'a') << " " << (char)(num[i+1]+'a') << endl;
            }
            fillAdj(dict, adj, ind[i], ind[i+1]-1, j+1);
        }
    }
    
    
    string findOrder(string dict[], int N, int K) {
        vector<vector<int>> adj(K, vector<int>(K));
        fillAdj(dict, adj, 0, N-1, 0);
        vector<int> sorted = topSort(adj, K);
        string res;
        for(int i: sorted)
            res += i + 'a';
        return res;
    }
};