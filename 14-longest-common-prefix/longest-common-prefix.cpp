class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        for(int j=0;j<strs[0].size();j++){
            int i=1;
            while(i<strs.size()){
                if(strs[i][j]!=strs[i-1][j]){
                    return strs[0].substr(0,j);
                }
                i++;
            }
        }
        return strs[0];
    }
};