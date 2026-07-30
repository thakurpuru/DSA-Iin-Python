class Solution {
public:
    vector<vector<int>>dp; 
    int solve(vector<int>& nums,int i,int j,int sum){
        if(i==j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=max(sum-nums[i]-solve(nums,i+1,j,sum-nums[i]),sum-nums[j]-solve(nums,i,j-1,sum-nums[j]));
    }
    int stoneGameVII(vector<int>& st) {
        int n=st.size();
        int total=accumulate(st.begin(),st.end(),0);
        dp.assign(n,vector<int>(n,-1));
        
    

        return solve(st,0,n-1,total);
    }
};