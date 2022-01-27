class public {
public:
    //You need to complete this fucntion
    
    # define ll long long int
    const int MOD = 1e9+7;
    
    ll expo(int a, int b) {
        if(b == 0)
            return 1;
        if(b&1)
            return a * expo(a, b-1) % MOD;
        ll halfPow = expo(a, b/2);
        return halfPow * halfPow % MOD;
    }
    
    long long power(int N,int R)
    {
       return expo(N, R);
    }

};