class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> group;
        for(string &s: strs) {
            vector<int> cnt(26);
            for(char c: s)
                cnt[c-'a']++;
            group[cnt].push_back(s);
        }
        vector<vector<string>> res;
        for(auto p: group) {
            res.push_back(p.second);
        }
        return res;
    }
};
	