class Solution {
public:
    bool canPair(vector<int> nums, int k) {
        vector<int> count(k);
        for(int num: nums) {
            count[num % k]++;
        }
        if(count[0]&1)
            return false;
        for(int i = 1; i <= k/2; i++) {
            if(i == k-i) {
                if(count[i]&1)
                    return false;
            }
            else {
                if(count[i] != count[k-i]) 
                    return false;
            }
        }
        return true;
    }
};