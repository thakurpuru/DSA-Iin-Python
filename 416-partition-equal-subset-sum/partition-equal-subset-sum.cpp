class Solution {
public:
    vector<vector<int>>dp;
    bool solve(vector<int>& nums,int sum,int i){
        if(sum==0) return true;
        if(i>=nums.size()) return false;
        if(sum<0) return false;
        if(dp[i][sum]!=-1) return dp[i][sum];
        bool take=solve(nums,sum-nums[i],i+1);
        bool skip=solve(nums,sum,i+1);
        return dp[i][sum]=take || skip;
    }
    bool canPartition(vector<int>& nums) {
        int total=accumulate(nums.begin(),nums.end(),0);
        if(total%2!=0) return false;
        int k=total/2;
        dp.assign(nums.size(),vector<int>(k+1,-1));
        return solve(nums,k,0);
    }
};