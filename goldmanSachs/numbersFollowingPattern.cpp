class Solution {
    bool canMake(string &s, int ind, string &curNum, vector<int> &digits) {
        if(ind == s.length())
            return true;
        // cout << "curNum: " << curNum << ", ind: " << ind << endl;
        for(int i = 1; i < 10; i++) {
            if(!digits[i])
                continue;
                
            char dig = '0' + i;
                
            if(s[ind] == 'I') {
                if(dig > curNum.back()) {
                    curNum.push_back(dig);
                    digits[i] = 0;
                    
                    if(canMake(s, ind+1, curNum, digits))
                        return true;
                        
                    curNum.pop_back();
                    digits[i] = 1;
                }
            }
            else {
                if(dig < curNum.back()) {
                    curNum.push_back(dig);
                    digits[i] = 0;
                    
                    if(canMake(s, ind+1, curNum, digits))
                        return true;
                        
                    curNum.pop_back();
                    digits[i] = 1;
                }
            }
        }
        return false;
    }
    
public:
    string printMinNumberForPattern(string S){
        vector<int> digits(10, 1);
        
        for(int i = 1; i < 10; i++) {
            digits[i] = 0;
            
            char dig = i + '0';
            
            string num = {dig};
            
            if(canMake(S, 0, num, digits)) 
                return num;
                
            digits[i] = 1;
        }
        return "XX";
    }
};