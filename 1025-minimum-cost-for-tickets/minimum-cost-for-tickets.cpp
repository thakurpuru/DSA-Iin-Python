class Solution {
public:
    vector<int> dp;
    int solve(vector<int>& days, vector<int>& costs,int i){
        int n=days.size();
        if(i>=days.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int ans=costs[0]+solve(days,costs,i+1);
        
        auto it1=lower_bound(days.begin()+i,days.end(),days[i]+7);
        
        int id=it1-days.begin();
        ans=min(ans,costs[1]+solve(days,costs,id));
        
        auto it2=lower_bound(days.begin()+i,days.end(),days[i]+30);
        
        int id1=it2-days.begin();
        ans=min(ans,costs[2]+solve(days,costs,id1));
        
        return dp[i]=ans;
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        dp.assign(n,-1);
        return solve(days,costs,0);   
    }
};