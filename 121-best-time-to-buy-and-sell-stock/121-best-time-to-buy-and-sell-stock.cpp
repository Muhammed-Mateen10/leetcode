class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b = 0, s = 1, prof = INT_MIN;
        int n  = prices.size();
        while(s < n){
            prof = max(prof , prices[s]  - prices[b]);
            if(prices[b] > prices[s])
            {
                b = s;
                ++s;
                
            }
            else {
                ++s;
        }
            
        }
        return prof > 0 ? prof : 0;
    }
};