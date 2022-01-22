#define ll long long

class Solution {
public:
    int m;
    int splitArray(vector<int>& a, int m) {
        this->m = m;
        int s = 0;
        int n = a.size();
        for(int x: a) {
            s += x;
        }
        int res = 0;
        int low = 0, high = s;
        while(low <= high) {
            int mid = (low+high)/2;
            if(valid(a, n, mid)) {
                res = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return res;
    }
    
    int valid(vector<int> &a, int n, int s) {
        int curSum = 0;
        int cnt = 1;
        for(int i = 0; i < n; i++) {
            if(s < a[i]) {
                return false;
            }
            curSum += a[i];
            if(curSum > s) {
                cnt++;
                curSum = a[i];
            }
        }
        return cnt <= m;
    }
};