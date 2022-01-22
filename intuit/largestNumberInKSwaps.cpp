class Solution
{
    public:
    
    void swap(string &s, int i, int j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    
    char getMaxToRight(string &str, int i, int n) {
        char curMaxChar = '/';
        for(int j = i; j < n ; j++) {
            curMaxChar = max(curMaxChar, str[j]);
        }
        return curMaxChar;
    }
    
    void backtrack(string &cur, string &maxStr, int n, int i, int k) {
        if(i == n-1 || k == 0) {
            maxStr = max(maxStr, cur);
            return;
        }
        char maxToRight = getMaxToRight(cur, i, n);
        if(cur[i] == maxToRight) {
            backtrack(cur, maxStr, n, i+1, k);
            return;
        }
        for(int j = i+1; j < n; j++) {
            if(cur[j] == maxToRight) {
                swap(cur, i, j);
                backtrack(cur, maxStr, n, i+1, k-1);
                swap(cur, i, j);
            }
        }
    }
    
    string findMaximumNum(string str, int k)
    {
        string maxStr = str;
        backtrack(str, maxStr, str.length(), 0, k);
        return maxStr;
    }
};