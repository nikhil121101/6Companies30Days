class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> res;
        
        for(int i = 0; i < n-3; i++) {
            
            if(i > 0 && arr[i] == arr[i-1])
                continue;
            for(int j = i+1; j < n-2; j++) {
                
                if(j > i+1 && arr[j] == arr[j-1])
                continue;
                
                int l = j+1, r = n-1;
                while(l < r) {
                    int sum = arr[i] + arr[j] + arr[l] + arr[r];
                    if(sum < k) {
                        l++;
                    }
                    else if(sum > k) {
                        r--;
                    }
                    else {
                        res.push_back({arr[i], arr[j], arr[l], arr[r]});
                        while(l+1 < r && arr[l+1] == arr[l])
                            l++;
                        l++;
                        while(r-1 > l && arr[r-1] == arr[r])
                            r--;
                        r--;
                    }
                }
                
            }
        }
        return res;
    }
};