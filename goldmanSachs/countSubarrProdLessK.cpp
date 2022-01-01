# define ll long long int
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, ll k) {
        ll prod = a[0];
        int left = 0, right = 0;
        int ans = 0;
        while(right < n) {
            if(prod < k) {
                ans += (right - left + 1);
                right++;
                if(right < n)
                    prod *= a[right];
            }
            else {
                prod /= a[left];
                left++;
            }
            if(left > right) {
                right++;
                if(right < n)
                    prod *= a[right];
            }
        }
        return ans;
    }
};