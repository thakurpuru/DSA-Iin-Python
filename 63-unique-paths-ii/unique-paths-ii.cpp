class Solution {
public:
    vector<vector<int>> dp;
    int solve(vector<vector<int>>& grid,int i,int j){
        int m=grid.size();
        int n=grid[0].size();
        if(i>=m || j>=n || grid[i][j]==1 ) return 0;
        if(i==m-1 && j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=solve(grid,i+1,j)+solve(grid,i,j+1);
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        dp.assign(m,vector<int>(n,-1));
        return solve(obstacleGrid,0,0);
    }
};