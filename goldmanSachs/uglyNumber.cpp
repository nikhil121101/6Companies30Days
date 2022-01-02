class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	# define ll long long int
	ll getNthUglyNo(int n) {
	    vector<ll> nums = {1};
	    int p2 = 0, p3 = 0, p5 = 0;
	    for(int i = 1; i < n; i++) {
	        ll num2 = nums[p2]*2;
	        ll num3 = nums[p3]*3;
	        ll num5 = nums[p5]*5;
	        
	        ll minNum = min({num2, num3, num5});
	        
	        nums.push_back(minNum);
	        
	        if(minNum == num2) {
	            p2++;
	        }
	        if(minNum == num3) {
	            p3++;
	        }
	        if(minNum == num5) {
	            p5++;
	        }
	        
	       // cout << nums[i] << endl;
	    }
	    return nums.back();
	}
};