class Solution {
    bool canReach(int i, vector<int> adj[], vector<bool> &vis, int c, int d) {
        if(i == d)
            return true;
        vis[i] = 1;
        
        for(int j: adj[i]) 
            if(!(i == c && j == d) &&
                !vis[j] && canReach(j, adj, vis, c, d)) 
                return true;
        return false;
    }
    
	public:
    //Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector<bool> vis(V);
        return !canReach(c, adj, vis, c, d);
    }
};