class Solution {
public:
    # define ll long long int
    
    const int MOD = 1e9 + 7;
    
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<vector<int>> person;
        for(int i = 0; i < n; i++) {
            person.push_back({efficiency[i], speed[i]});
        }
        
        sort(person.begin(), person.end());
        
        priority_queue<int, vector<int>, greater<int>> pq; // size of this queue should be <= k-1
        
        ll speedSum = 0;
        
        ll maxPerformance = 0;
        
        for(int i = n-1; i >= 0; i--) {
            
            int curSpeed = person[i][1], curEff = person[i][0];
            
            ll curPerformance = curEff * (curSpeed + speedSum);
            
            maxPerformance = max(maxPerformance, curPerformance);
            
            pq.push(curSpeed);
            speedSum = speedSum + curSpeed;
            
            if(pq.size() == k) {
                speedSum = speedSum - pq.top();
                pq.pop();
            }
            
        }
        return maxPerformance % MOD;
    }
};