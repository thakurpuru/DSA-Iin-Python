class Solution {
public:
    vector<vector<int>> dp;
    int solve(vector<int>& prices,int i,int by){
        if(i>=prices.size()){
            return 0;
        }
        if(dp[i][by]!=-1)return dp[i][by];
        int ans=INT_MIN;
        if(by){
           return dp[i][by]= max(-prices[i]+solve(prices,i+1,0),solve(prices,i+1,1));

        }else{
            return dp[i][by]=max(prices[i]+solve(prices,i+2,1),solve(prices,i+1,0));
        }
        
       
        
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        dp.assign(n,vector<int>(2,-1));
        return solve(prices,0,1);   
    }
};