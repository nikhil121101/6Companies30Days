class Solution{
public:
    int minSteps(int D){
        int i = 1;
        int cur = 0;
        
        while(cur < D || (cur-D)&1) {
            cur += i;
            i++;
        }
        
        return i-1;
    }
};