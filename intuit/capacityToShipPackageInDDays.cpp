class Solution {
public:
    
    bool possible(vector<int> &weights, int targetDays, int cap) {
        int curWeight = 0;
        int curDays = 1;
        for(int w: weights) {
            curWeight += w;
            if(curWeight > cap) {
                curDays++;
                curWeight = w;
            }
        }
        return curDays <= targetDays;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int mx = INT_MIN;
        for(int w: weights) {
            sum += w;
            mx = max(mx, w);
        }
        int low = mx, high = sum;
        int res = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(possible(weights, days, mid)) {
                res = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return res;
    }
};