class Solution {
public:
    int solve(int n,vector<int>& vec,vector<int>& dp){
        if(n==0) return 0;
        if(n<0) return INT_MAX;
        if(dp[n]!=-1) return dp[n];
        int ans=INT_MAX;
        for(int i=vec.size()-1;i>=0;i--){
            int a=solve(n-vec[i],vec,dp);
            if(a!=INT_MAX) ans=min(a+1,ans);
        }
        return dp[n]=ans;
    }
    int numSquares(int n) {
        vector<int> vec;
        vector<int> dp(n+1,-1);
        for(int i=1;i*i<=n;i++){
            vec.push_back(i*i);
        }
        return solve(n,vec,dp);
    }
};