class Solution {
public:
    vector<vector<int>>dp;
    int solve(int n,long long clip,long long screen){
        if(screen==n) return 0;

        if(screen>n || clip>n) return INT_MAX;
        if(dp[clip][screen]!=-1) return dp[clip][screen];
        int ans=INT_MAX;

        if(clip>0){
            int a=solve(n,clip,screen+clip);
            if(a!=INT_MAX){
                ans=min(ans,a+1);
            }
        }
        if(screen!=clip){
            int b=solve(n,screen,screen);
            if(b!=INT_MAX) ans=min(b+1,ans);

        }
        return dp[clip][screen]=ans;

    }
    int minSteps(int n) {
        dp.assign(n,vector<int>(n,-1));
        if(n==1) return 0;
        return solve(n,0,1);
    }
};