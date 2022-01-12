class Solution {
public:
    
    map<int, vector<char>> func = {
        {2, {'a', 'b', 'c'}},
        {3, {'d', 'e', 'f'}},
        {4, {'g', 'h', 'i'}},
        {5, {'j', 'k', 'l'}},
        {6, {'m', 'n', 'o'}},
        {7, {'p', 'q', 'r', 's'}},
        {8, {'t', 'u', 'v'}},
        {9, {'w', 'x', 'y', 'z'}},
    };
    
    void backtrack(int i, int n, int digits[], string &cur, vector<string> &res) {
        if(i == n) {
            if(cur.length())
                res.push_back(cur);
            return;
        }
        vector<char> chars = func[digits[i]];
        for(char c: chars) {
            cur += c;
            backtrack(i+1, n, digits, cur, res);
            cur.pop_back();
        }
    }
    
    vector<string> possibleWords(int a[], int n) {
        string cur;
        vector<string> res;
        backtrack(0, n, a, cur, res);
        return res;
    }
};