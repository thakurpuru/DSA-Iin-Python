class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        using T=tuple<int,int,int>;
        priority_queue<T,vector<T>,greater<>> pq;
        int m=grid.size(),n=grid[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,1,-1};
        pq.push({grid[0][0],0,0});
        while(!pq.empty()){
            auto [max_d,i,j]=pq.top();
            pq.pop();
            if(i==m-1 && j==n-1) return max_d;
            if(vis[i][j]) continue;
            vis[i][j]=true;

            for(int k=0;k<4;k++){
                int x=dx[k]+i;
                int y=dy[k]+j;
                if(x>=0 && x<m && y>=0 && y<n && !vis[x][y]){
                    int new_d=max(max_d,grid[x][y]);
                    pq.push({new_d,x,y});
                }
            }
        }
        return -1;
    }
};