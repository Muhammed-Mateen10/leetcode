class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int dp[n];
        dp[0] = nums[0];
        
        for (int i = 1 ; i < n ; ++i){
        dp[i] = max((i >= 2 ? dp[i - 2]:0) + nums[i] , dp[i - 1]);    
        }
        
        return dp[n - 1];
    }
};