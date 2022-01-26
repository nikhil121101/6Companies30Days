class Solution {
public:
    
    #define pi pair<double, int> 
    
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> adj(n);
        int m = edges.size();
        for(int i = 0; i < m; i++) {
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        priority_queue<pi> pq;
        pq.push({1, start});
        vector<bool> done(n);
        while(!pq.empty()) {
            auto [prob, i] = pq.top(); pq.pop();
            if(done[i])
                continue;
            if(i == end)
                return prob;
            done[i] = 1;
            for(auto e: adj[i]) {
                auto [j, w] = e;
                if(!done[j])
                    pq.push({prob*w, j});
            }
        }
        return 0;
    }
};