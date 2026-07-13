class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> mn(3,prices[0]),dp(3,0);
        for(int i=1;i<n;i++){
            for(int k=1;k<=2;k++){
                mn[k]=min(mn[k],prices[i]-dp[k-1]);
                dp[k]=max(dp[k],prices[i]-mn[k]);
            }
        }
        return dp[2];
    }
};