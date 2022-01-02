class Solution {
public:
    
    string gcdOfStrings(string str1, string str2) {
        int n = min(str1.length(), str2.length());
        for(int i = 0; i < n; i++) {
            if(str1[i] != str2[i])
                return "";
        }
        if(str1.length() == str2.length())
            return str1;
        else if(str1.length() < str2.length()) {
            return gcdOfStrings(str1.substr(0, n), str2.substr(n));
        }
        else {
            return gcdOfStrings(str2.substr(0, n), str1.substr(n));
        }
    }
};