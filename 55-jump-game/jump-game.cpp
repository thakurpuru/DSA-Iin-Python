class Solution {
public:
    vector<int> dp;
    bool solve(vector<int>& nums,int i){
        int n=nums.size();
        if(i==n-1) return true;
        if(i>=n) return false;
        if(dp[i]!=-1) return dp[i];
        for(int j=1;j<=nums[i];j++){
            if(solve(nums,i+j)) return dp[i]=true;
        }
        return dp[i]=false;
    }
    bool canJump(vector<int>& nums) {
        dp.assign(nums.size(),-1);
        return solve(nums,0);
    }
};