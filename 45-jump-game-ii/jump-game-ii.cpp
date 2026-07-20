class Solution {
public:
    vector<int> dp;
    int solve(vector<int>& nums,int i){
        int n=nums.size();
        if(i==n-1) return 0;
        if(i>=n) return INT_MAX;
        if(dp[i]!=-1) return dp[i];
        int ans=INT_MAX;
        for(int j=1;j<=nums[i];j++){
            int a=solve(nums,i+j);
            if(a!=INT_MAX)
            ans=min(ans,a+1);
        }
        return dp[i]=ans;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        dp.assign(n,-1);
        return solve(nums,0);
    }
};