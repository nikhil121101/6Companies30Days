class Solution {
public:
    
    int getDist(vector<int> &p1, vector<int> &p2) {
        return (p1[0]-p2[0]) * (p1[0]-p2[0]) + (p1[1]-p2[1]) * (p1[1]-p2[1]);
    }
    
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n = points.size();
        int res = 0;
        for(int i = 0; i < n; i++) {
            map<int, int> dist;
            for(int j = 0; j < n; j++) {
                if(i != j) {
                    dist[getDist(points[i], points[j])]++;
                }
            }
            for(auto p: dist) {
                auto [dist, cnt] = p;
                res += cnt * (cnt-1);
            }
        }
        return res;
    }
};