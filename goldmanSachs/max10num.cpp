class Solution {
public:
    vector<int> max10NumIn10M(vector<int> &nums) {
        priority_queue<int, vector<int>, greater<int>> pq; // min heap
        for(int x: nums) {
            pq.push(x);
            if(pq.size() > 10)
                pq.pop();
        }
        vector<int> res;
        for(int x: pq)
            res.push_back(x);
        return res;
    }
}