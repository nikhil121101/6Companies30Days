class Solution {

    # define ll long long int
    
    const int MOD = 1e9 + 7;
    
	public:
		int CountWays(string s){
		    int n = s.length();
		    ll prevWays = s[0] != '0', prevPrevWays = 1;
		    for(int i = 1; i < n; i++) {
		        ll curWays = 0;
		        if(s[i-1] > '0') {
		            int val = (s[i-1] - '0') * 10 + s[i] - '0';
		            if(val <= 26) {
		                curWays = (curWays + prevPrevWays) % MOD;
		            }
		        }
		        if(s[i] != '0')
		            curWays = (curWays + prevWays) % MOD;
		      
		        prevPrevWays = prevWays;
		        prevWays = curWays;
		    }
		    return prevWays;
		}

};