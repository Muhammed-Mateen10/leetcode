class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int minsum = 0;
        int maxsum = 0;
        int sum = 0;
        int bestmax = nums[0];
        int bestmin = nums[0];
        for(auto i : nums)
        {
            sum += i;
            
            minsum = (minsum > 0 ? 0 : minsum);
            minsum += i;
            bestmin = min(bestmin , minsum);
            
            maxsum = (maxsum < 0 ? 0 : maxsum);
            maxsum += i;
            bestmax = max(bestmax , maxsum);
            
        }
        
        if(sum == bestmin)
            return bestmax;
        return max(bestmax , sum - bestmin);
    }
};