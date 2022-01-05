class Solution{
public:
    
    string decodedString(string s){
        stack<int> cnt;
        stack<int> ind;
        string res = "";
        int j = 0;
        int num = 0;
        for(char c: s) {
            if(isdigit(c)) {
                num *= 10;
                num += c-'0';
            }
            else if(c == '[') {
                cnt.push(num);
                ind.push(j);
                num = 0;
            }
            else if(c == ']') {
                int k = cnt.top();
                string toAppend = res.substr(ind.top());
                for(int i = 0; i < k-1; i++) {
                    res += toAppend;
                    j += toAppend.length();
                }
                ind.pop(); cnt.pop();
            }
            else {
                res += c;
                j++;
            }
        }
        return res;
    }
};