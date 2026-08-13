class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums,vector<int>& path,int st,int sum){
        if(sum<0) return;
        if(sum==0){
            ans.push_back(path);
            return;
        }
        for(int i=st;i<nums.size();i++){
            if(i>st && nums[i]==nums[i-1]) continue;
            path.push_back(nums[i]);
            solve(nums,path,i+1,sum-nums[i]);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> path;
        solve(nums,path,0,target);
        return ans;
    }
};