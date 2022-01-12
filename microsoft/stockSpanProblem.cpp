class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        vector<int> res(n, -1);
        stack<int> st;
        for(int i = n-1; i >= 0; i--) {
            while(!st.empty() && price[st.top()] < price[i]) {
                res[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        for(int i = 0; i < n; i++) {
            res[i] = i-res[i];
        }
        return res;
    }
};