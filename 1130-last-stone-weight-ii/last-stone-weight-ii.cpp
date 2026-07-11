class Solution {
public:
    int total;
    vector<vector<int>> dp;
    int solve(int i,vector<int>& stones,int sum){
        if(i==stones.size()) return abs(total-2*sum);

        if(dp[i][sum]!=-1) return dp[i][sum];
        int take=solve(i+1,stones,sum+stones[i]);
        int skip=solve(i+1,stones,sum);
        return dp[i][sum]=min(take,skip);
    }
    int lastStoneWeightII(vector<int>& stones) {
        int n=stones.size();
        total=0;
        for(int i:stones)total+=i;
        
        dp.assign(n,vector<int>(total+1,-1));

        return solve(0,stones,0);
    }
};