class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> lastOne;
        for(int i = 0; i < n; i++) {
            int prev = -1;
            for(int j = 0; j < n; j++) {
                if(grid[i][j]) {
                    prev = j;
                }
            }
            lastOne.push_back(prev);
        }
        int swaps = 0;
        for(int i = 0; i < n; i++) {
            if(lastOne[i] > i) {
                int next = -1;
                
                for(int j = i+1; j < n; j++) {
                    if(lastOne[j] <= i) {
                        next = j; 
                        break;
                    }
                }
                
                if(next == -1)
                    return -1;
                
                int temp = lastOne[next];
                for(int j = next; j > i; j--) {
                    lastOne[j] = lastOne[j-1];
                }
                lastOne[i] = temp;
                
                swaps += next-i;
            }
        }
        return swaps;
    }
};