class Solution {
public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        int prev = 0, prev_prev = 0;
        for(int i = 0; i < n; i++) {
            int cur = max(prev, prev_prev + arr[i]);
            prev_prev = prev;
            prev = cur;
        }
        return prev;
    }
};