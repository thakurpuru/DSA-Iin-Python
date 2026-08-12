class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<int> row,col;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(int i=0;i<row.size();i++){
            int r=row[i],c=col[i];
            for(int k=0;k<n;k++){
                matrix[k][c]=0;
            }
            for(int k=0;k<m;k++){
                matrix[r][k]=0;
            }
        }
    }
};