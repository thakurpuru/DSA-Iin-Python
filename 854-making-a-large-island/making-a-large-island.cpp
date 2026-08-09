class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i,int j,int id){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]!=1) return 0;
        grid[i][j]=id;
        return 1+dfs(grid,i+1,j,id)+dfs(grid,i-1,j,id)+dfs(grid,i,j+1,id)+dfs(grid,i,j-1,id);
    }
    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int id=2;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int sz=dfs(grid,i,j,id);
                    mp[id]=sz;
                    id++;
                }
            }
        }
        int ans=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    grid[i][j]=1;
                    int temp=1;
                    unordered_set<int> st;

                    int dx[4]={1,-1,0,0};
                    int dy[4]={0,0,-1,1};
                    for(int k=0;k<4;k++){
                        
                        int x=dx[k]+i;
                        int y=dy[k]+j;
                        if(x>=0 && y>=0 && x<n && y<n && grid[x][y]>1){
                            int idx=grid[x][y];
                            if(!st.count(idx)){
                                temp+=mp[idx];
                                st.insert(idx);
                            }
                        }
                    }
                    ans=max(temp,ans);
                }
            }
        }
        if(ans==0){
            return n*n;
        }
        return ans;
    }
};