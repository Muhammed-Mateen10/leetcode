class Solution {
public:
    int robHelper(const vector<int> &nums){
        int n = nums.size();
        int dp[n];
        dp[0] = nums[0];
        for(int i = 1; i < nums.size()  ; ++i)
        {
            dp[i] = max((i >= 2 ? dp[i -2 ] : 0) + nums[i], dp[i -1 ]);
        }
        return dp[n - 1];
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) {return nums[0];}
        return max(robHelper(vector<int>(nums.begin() , nums.end() - 1)) , robHelper(vector<int>                (nums.begin() + 1 ,nums.end())));
    }
};