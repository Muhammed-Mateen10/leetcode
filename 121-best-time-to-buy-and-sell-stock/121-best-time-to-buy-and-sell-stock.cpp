class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b = 0, s = 1, prof = INT_MIN;
        int n  = prices.size();
        while(s < n){
            prof = max(prof , prices[s]  - prices[b]);
            b = (prices[b] > prices[s] ? s : b);
            ++s;
        }
        return prof > 0 ? prof : 0;
    }
};