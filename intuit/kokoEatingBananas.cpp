class Solution {
public:
    
    bool possible(vector<int> piles, int k, int h) {
        int cur = 0;
        for(int pile: piles) {
            cur += (pile+k-1)/k;
        }
        return cur <= h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int low = 1, high = piles.back();
        int res = 0;
        while(low <= high) {
            int mid = low + (high-low)/2;
            if(possible(piles, mid, h)) {
                res = mid;
                high = mid - 1;
            }
            else {
                low = mid+1;
            }
        }
        return res;
    }
};