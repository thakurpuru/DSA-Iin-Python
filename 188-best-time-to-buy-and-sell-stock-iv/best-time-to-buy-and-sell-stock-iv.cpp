class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<int> mn(k+1,prices[0]),dp(k+1,0);
        for(int i=1;i<n;i++){
            for(int j=1;j<=k;j++){
                mn[j]=min(mn[j],prices[i]-dp[j-1]);
                dp[j]=max(dp[j],prices[i]-mn[j]);
            }
        }
        return dp[k];
    }
};