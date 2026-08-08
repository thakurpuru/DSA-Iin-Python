class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<vector<int>>&g,vector<bool>& vis,vector<int>& low,vector<int>& dt,int u,int parent,int time){
        vis[u]=true;
        dt[u]=low[u]=++time;
        for(auto v:g[u]){
            if(!vis[v]){
                dfs(g,vis,low,dt,v,u,time);
                low[u]=min(low[u],low[v]);
                if(low[v]>dt[u]){
                    ans.push_back({u,v});
                }
            }else if(v!=parent){
                low[u]=min(dt[v],low[u]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>> g(n);
        vector<int> low(n,0),dt(n,0);
        vector<bool> vis(n,false);
        for(auto u:connections){
            g[u[0]].push_back(u[1]);
            g[u[1]].push_back(u[0]);
        }
        dfs(g,vis,low,dt,0,-1,0);
        return ans;
    }
};