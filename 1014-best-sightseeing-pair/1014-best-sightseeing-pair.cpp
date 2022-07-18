class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
       int n = values.size();
       int a = values[0];
        int ans = INT_MIN;
        for(int i = 1; i < n ; ++i){
            ans = max(ans ,a + values[i] - i);
            a = max(a , values[i] + i);
        }
        return ans;
    }
};