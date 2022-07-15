class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        for(int i = nums.size() - 2; i >= 0 ; --i){
            if(nums[i] + i + 1 >= n){
                n = i + 1;
            }
        }
        return n == 1;
    }
};