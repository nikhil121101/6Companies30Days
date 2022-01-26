class Solution {
public:
    bool winnerOfGame(string color) {
        int a_count = 0, b_count = 0;
        int n = color.size();
        for(int i = 1; i < n-1; i++) {
            if(color[i] == 'A' && color[i-1] == 'A' && color[i+1] == 'A') {
                a_count++;
            }
            if(color[i] == 'B' && color[i-1] == 'B' && color[i+1] == 'B') {
                b_count++;
            }
        }
        return a_count > b_count;
    }
};