class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int i=0,l=n-1;
        while(i<=l){
            int mid=i+(l-i)/2;
            if(target==matrix[mid][m-1]) return true;
            else if(target>matrix[mid][m-1]){
                i=mid+1;
            }else{
                l=mid-1;
            }
        }
        if(i>=n) return false;
        int j=0,k=m-1;
        while(j<=k){
            int mid=j+(k-j)/2;
            if(matrix[i][mid]==target){
                return true;
            }else if(target>matrix[i][mid]){
                j=mid+1;
            }else{
                k=mid-1;
            }
        }
      
        return false;
    }
};