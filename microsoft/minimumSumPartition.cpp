class Solution
public:
	int minDifference(int arr[], int n)  { 
	    
	    int arraySum = 0;
	    for(int i = 0; i < n; i++)
	        arraySum += arr[i];
	        
	    vector<vector<bool>> hasSum(arraySum+1, vector<bool>(n+1));
	    
	    hasSum[0][0] = true;
	    
	    for(int sum = 1; sum <= arraySum; sum++) {
	        for(int i = 1; i <= n; i++) {
	            hasSum[sum][i] = hasSum[sum][i] || hasSum[sum][i-1];
	            if(sum >= arr[i-1]) {
	                hasSum[sum][i] = hasSum[sum][i] || hasSum[sum-arr[i-1]][i-1];
	            }
	        }
	    }
	    
	    int minDif = INT_MAX;
	    for(int sum = 0; sum <= arraySum; sum++) {
	        if(hasSum[sum][n]) {    
	            minDif = min(minDif, abs(sum - (arraySum - sum)));
	        }
	    }
	    return minDif;
	} 
};
