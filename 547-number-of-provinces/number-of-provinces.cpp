class Solution {
public:
    void dfs(vector<vector<int>>& gr,vector<bool>& vis,int src){
        vis[src]=true;
        for(int v:gr[src]){
            if(!vis[v]){
                dfs(gr,vis,v);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>> gr(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && isConnected[i][j]==1){
                    gr[i].push_back(j);
                }
            }
        }
        int count=0;
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(gr,vis,i);
            }
        }
        return count;
    }
};