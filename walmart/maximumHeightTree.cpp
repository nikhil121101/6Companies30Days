class Solution{
public:
    int height(int N){
        int i = 1;
        int height = 0;
        while(N >= i) {
            height++;
            N -= i;
            i++;
        }
        return height;
    }
};