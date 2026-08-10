class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int m=grid.size(),n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                if(grid[i][j]==1) count++;

            }
        }
        if(q.empty())
            return count == 0 ? 0 : -1;
        int t=0,cnt=0;
        while(!q.empty()){
            int sz=q.size();
            
            for(int a=0;a<sz;a++){
                auto [i,j]=q.front();
                q.pop();
                int dx[4]={0,0,1,-1};
                int dy[4]={1,-1,0,0};
                for(int k=0;k<4;k++){
                    int x=dx[k]+i;
                    int y=dy[k]+j;
                    if(x>=0 && x<m && y<n && y>=0 && grid[x][y]==1){
                        grid[x][y]=2;
                        q.push({x,y});
                        cnt++;
                    }
                }

            }
            if(!q.empty())t++;
        }
        if(cnt!=count) return -1;
        return t;
    }
};