class Solution {
public:
    vector<vector<int>> ans;
    void solve(int sum,vector<int>& nums,int st,vector<int>& path){
        if(sum<0) return ;
        if(sum==0){
            ans.push_back(path);
            return;
        }
        
        for(int i=st;i<nums.size();i++){
            path.push_back(nums[i]);
            solve(sum-nums[i],nums,i,path);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int> path;
        solve(target,candidates,0,path);
        return ans;
    }
};