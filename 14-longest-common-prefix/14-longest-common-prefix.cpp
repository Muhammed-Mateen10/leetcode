class Solution {
public:
    //n^2
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for(int i = 1 ; i < strs.size() ;  ++i){
            prefix.resize(strs[i].size());
            for(int j = 0 ; j < strs[i].size() ; ++j)
            {
                if(prefix[j] != strs[i][j]){
                    prefix = prefix.substr(0 , j);
                    break;
                }
            }
            }
        return prefix;
    }
};