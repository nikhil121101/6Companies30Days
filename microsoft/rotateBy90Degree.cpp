void transpose(vector<vector<int>> &a) {
    int n = a.size(), m = a[0].size();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}
 
void columnSwap(vector<vector<int>> &a) {
    int n = a.size(), m = a[0].size();
    for(int j = 0; j < m/2; j++) {
        for(int i = 0; i < n; i++) {
            int temp = a[i][j];
            a[i][j] = a[i][m-j-1];
            a[i][m-j-1] = temp;
        }
    }
}
 
void rotate(vector<vector<int> >& matrix) {
    columnSwap(matrix);
    transpose(matrix);
}