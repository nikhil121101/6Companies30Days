bool hasNum(const string &s, int i, int target) {
    int len = to_string(target).length();
    if(i+len > s.length()) 
        return false;
    return target == stoi(s.substr(i, len));
}

int missingNumber(const string& s)
{
    int n = s.length();
    
    for(int i = 1; i <= 6; i++) {
        
        bool flag = true;
        
        int cur = stoi(s.substr(0, i)) + 1;
        
        int j = i;
        int missing = -1;
        
        while(j < n) {
            if(!hasNum(s, j, cur)) {
                if(missing == -1 && hasNum(s, j, cur+1))  {
                    missing = cur;
                    j += to_string(cur+1).length();
                    cur += 2;
                    continue;
                }
                else {
                    flag = false;
                    break;
                }
            }
            j += to_string(cur).length();
            cur++;
        }
        if(flag)
            return missing;
    }
    return -1;
}