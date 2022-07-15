class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int best = nums[0];
        int s = 0;
        for(int i = 0 ; i < n ; ++i){
            s = (s < 0 ? 0 : s);
            s += nums[i];
            best = max(best , s);
        }
        return best;
    }
};