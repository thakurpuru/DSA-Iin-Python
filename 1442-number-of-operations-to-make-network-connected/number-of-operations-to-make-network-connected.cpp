class Solution {
public:
    void dfs(int u,vector<vector<int>>& g,vector<bool>& vis){
        vis[u]=true;
        for(auto v:g[u]){
            if(!vis[v]){
                dfs(v,g,vis);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<bool> vis(n,false);
       
        int m=connections.size();
        if(m<n-1) return -1;
        vector<vector<int>> g(n);
        for(auto u:connections){
            g[u[0]].push_back(u[1]);
            g[u[1]].push_back(u[0]);
        }
        int count=0;
       
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(i,g,vis);
            }
        }
        return count-1;
    }
};