class Solution {   
public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> res;
        int k = 0;
        int r1 = 0, r2 = r-1, c1 = 0, c2 = c-1;
        while(r1 <= r2 && c1 <= c2) {
            // printf("%d %d %d %d\n", r1, r2, c1, c2);
            if(r1 == r2) {
                for(int i = c1; i <= c2; i++) 
                    res.push_back(matrix[r1][i]);
            }
            else if(c1 == c2) {
                for(int i = r1; i <= r2; i++) 
                    res.push_back(matrix[i][c1]);
            }
            else {
                for(int i = c1; i < c2; i++) {
                   res.push_back(matrix[r1][i]);
                }
                for(int i = r1; i < r2; i++) {
                   res.push_back(matrix[i][c2]);
                }
                for(int i = c2; i > c1 ; i--) {
                   res.push_back(matrix[r2][i]);
                }
                for(int i = r2; i > r1; i--) {
                   res.push_back(matrix[i][c1]);
                }
            }
            r1++; r2--;
            c1++; c2--;
        }
        return res;
    }
};