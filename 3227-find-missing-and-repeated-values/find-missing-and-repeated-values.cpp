class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<bool> vis(n*n+1,false);
        vis[0]=true;
        int r=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int a=grid[i][j];
                if(vis[a]){
                    r=a;
                }
                vis[a]=true;
            }
        }
        for(int i=0;i<=n*n;i++){
            if(!vis[i]){
                return {r,i};
            }
        }
        return {0,0};
    }
};