class Solution {
public:
    int solve(int n,long long clip,long long screen){
        if(screen==n) return 0;

        if(screen>n || clip>n) return INT_MAX;
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
        return ans;

    }
    int minSteps(int n) {
        if(n==1) return 0;
        return solve(n,0,1);
    }
};