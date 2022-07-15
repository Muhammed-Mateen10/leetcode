class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        set<int> s(nums.begin() , nums.end());
        
        unordered_map<int , int> freq;
        for(auto &i : nums)
            freq[i]++;
        
        
        int n = s.size();
        int dp[n];
        nums = vector<int>(s.begin() , s.end());
        memset(dp , 0 , sizeof(dp));
        dp[0] = nums[0] * freq[nums[0]];

        for(int i = 1 ; i < n ; ++i){
            if (nums[i] - nums[i - 1] <= 1)
            dp[i] += max((i >= 2 ? dp[i - 2]: 0) + (nums[i] * freq[nums[i]]) , dp[i - 1]);
            else{
                dp[i] = dp[i - 1] + nums[i] * freq[nums[i]];
            }
            
        }
    
        return dp[n - 1];
    
    }
};