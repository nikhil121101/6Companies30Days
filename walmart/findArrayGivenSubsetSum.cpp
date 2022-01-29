class Solution {
public:
    
    pair<vector<int>, vector<int>> partition(vector<int> &subset, int num) {
        int n = subset.size();
        vector<int> exclusive;
        vector<int> inclusive;
        int l = 0, r = 1;
        vector<bool> done(n);
        while(r < n) {
            if(done[l]) {
              l++;
              continue;
            }
            if(r == l) {
              r++;
              continue;
            }
            if(subset[r]-subset[l] < num) {
                r++;
            }
            else if(subset[r]-subset[l] > num) {
                l++;
            }
            else {
                done[l] = true; done[r] = true;
                exclusive.push_back(subset[l]);
                inclusive.push_back(subset[r]);
                l++; r++;
            }
        }
        return {exclusive, inclusive};
    }
    
    vector<int> recoverArray(int n, vector<int>& sums) {
        sort(sums.begin(), sums.end());
        vector<int> res;
        for(int i = 0; i < n; i++) {
            int sz = sums.size();
            int dif = sums[sz-1] - sums[sz-2];
            auto [exclusive, inclusive] = partition(sums, dif);
            bool exclusiveHasZero = false;
            for(int x: exclusive)
                if(!x) {
                    exclusiveHasZero = true;
                    break;
                }
            if(exclusiveHasZero) {
                res.push_back(dif);
                sums = exclusive;
            }
            else {
                res.push_back(-dif);
                sums = inclusive;
            }
        }
        return res;
    }
};