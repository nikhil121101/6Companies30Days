class Solution {
public:
     bool dfs(int i, int j, int k, vector<vector<char>> &board, string &word,
                int n, int m, int len, vector<vector<bool>> &vis) {
        if(k == len) {
            return true;
        }
        if(i < 0 || i > n-1 || j < 0 || j > m-1 ||
            vis[i][j] || board[i][j] != word[k]) {
            return false;
        }
        vis[i][j] = true;
        if(
            dfs(i-1, j, k+1, board, word, n, m, len, vis) ||
            dfs(i, j-1, k+1, board, word, n, m, len, vis) ||
            dfs(i+1, j, k+1, board, word, n, m, len, vis) ||
            dfs(i, j+1, k+1, board, word, n, m, len, vis)
          ) {
            return true;
        }
        vis[i][j] = false;
        return false;
    }
    
    bool isWordExist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size(), len = word.size();
        vector<vector<bool>> vis(n, vector<bool>(m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(dfs(i, j, 0, board, word, n, m, len, vis)) {
                    return true;
                }
            }
        }
        return false;
    }
};