class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++){
            ans=max(prices[i]-m,ans);
            m=min(m,prices[i]);
        }
        return ans;
    }
};