class Solution {
public:
    void permutation(vector<int> &num,vector<vector<int>>& ans,vector<int> & path,vector<bool>& used){
        if(num.size()==path.size()){
            ans.push_back(path);
            return;
        }
        for(int i=0;i<num.size();i++){
            if (used[i]) continue;
            path.push_back(num[i]);
            used[i]=true;
            permutation(num,ans,path,used);
            path.pop_back();
            used[i]=false;

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> path;
        vector<bool> used(nums.size(),false);
        permutation(nums,ans,path,used);
        return ans;
    }
};