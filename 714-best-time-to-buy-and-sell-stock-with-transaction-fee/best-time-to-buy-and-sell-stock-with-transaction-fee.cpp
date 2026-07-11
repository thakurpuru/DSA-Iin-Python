class Solution {
public:
    int solve(vector<int>& prices, int& fee,int i,int buy,vector<vector<int>>&dp){
        if(i>=prices.size())return 0;
        if(dp[i][buy]!=-1) return dp[i][buy];
        int ans=INT_MIN;
        if(buy){
            ans=max(-prices[i]+solve(prices,fee,i+1,0,dp),solve(prices,fee,i+1,1,dp));
        }else{
            ans=max(prices[i]-fee+solve(prices,fee,i+1,1,dp),solve(prices,fee,i+1,0,dp));
        }
        return dp[i][buy]=ans;
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();

        vector<vector<int>>dp(n,vector<int>(2,-1));
        return solve(prices,fee,0,1,dp);
    }
};