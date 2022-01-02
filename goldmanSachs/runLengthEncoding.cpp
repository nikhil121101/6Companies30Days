string encode(string src)
{     
    int n = src.length();
    
    string res = "";
    int start = 0;
    
    for(int i = 1; i < n; i++) {
        if(src[i] != src[i-1]) {
            res += src[i-1];
            res += i-start + '0';
            start = i;
        }
    }
    
    res += src[n-1];
    res += n-start + '0';
    
    return res;
}   