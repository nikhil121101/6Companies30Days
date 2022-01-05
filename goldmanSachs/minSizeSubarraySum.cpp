class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = -1;
        int sum = 0;
        int ans = n+1;
        while(right < n) {
            if(sum < target) {
                right++;
                if(right < n)
                    sum += nums[right];
            }
            else {
                ans = min(ans, right-left+1);
                sum -= nums[left];
                left++;
            }
        }
        return ans == n+1 ? 0 : ans;
    }
};