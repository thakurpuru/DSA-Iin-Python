class Solution {
public:
    vector<int> ans;
    bool dfs(int u,vector<bool>& vis,vector<vector<int>>& g,int tar){
        if(u==tar) return true;
        vis[u]=true;
        for(int v:g[u]){
            if(!vis[v]){
                if(dfs(v,vis,g,tar) )return true;
            }
        }
        return false;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<vector<int>> g(n+1);
        for(auto u:edges){
            vector<bool> vis(n+1);
            if(dfs(u[0],vis,g,u[1])){
                return u;
            }
            g[u[0]].push_back(u[1]);
            g[u[1]].push_back(u[0]);
        }
        return  {};
    }
};