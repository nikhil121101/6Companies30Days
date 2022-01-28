class Solution{
  public:
    vector<int> find3Numbers(vector<int> a, int n) {
        int minSoFar = a[0];
        int minSecond = INT_MAX, firstNum = -1;;
        for(int i = 1; i < n; i++) {
            
            if(minSecond != INT_MAX && minSecond < a[i])
                return {firstNum, minSecond, a[i]};
            
            if(a[i] > minSoFar && a[i] < minSecond ) {
                minSecond = a[i];
                firstNum = minSoFar;
            }
            
            minSoFar = min(minSoFar, a[i]);
        }
        return  {};
    }
};