class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {

        vector<vector<pair<int,int>>> g(n);
        vector<vector<long long>> dp(n,vector<long long>(n,INT_MAX));

        for(auto e:edges){
            dp[e[0]][e[1]]=e[2];
            dp[e[1]][e[0]]=e[2];

        }
        for(int i=0;i<n;i++)
        dp[i][i]=0;
        int m=INT_MAX;
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
                }
            }
        }
        vector<int> count(n);
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(dp[i][j]<=distanceThreshold) cnt++;
            }
            count[i]=cnt;
            m=min(cnt,m);
        }
        for(int i=n-1;i>=0;i--){
            if(count[i]==m) return i;
        }
        return 0;
    }
};