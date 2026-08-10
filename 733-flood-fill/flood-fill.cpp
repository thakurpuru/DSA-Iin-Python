class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int color,int org){

        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]!=org) return;

        grid[i][j]=color;
        dfs(grid,i+1,j,color,org);
        dfs(grid,i-1,j,color,org);
        dfs(grid,i,j+1,color,org);
        dfs(grid,i,j-1,color,org);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int org=image[sr][sc];
        if(color==org) return image;
        dfs(image,sr,sc,color,org);
        return image;
    }
};