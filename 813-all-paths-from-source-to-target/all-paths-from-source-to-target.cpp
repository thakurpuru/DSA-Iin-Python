class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<vector<int>>& graph,int src,vector<bool>& vis,vector<int>& path){
        int n=graph.size();
        if(src==n-1){
            path.push_back(n-1);
            ans.push_back(path);
            path.pop_back();
            return;
        }
        vis[src]=true;
        path.push_back(src);
        for(auto& v:graph[src]){
            if(!vis[v]){
                dfs(graph,v,vis,path);
            }
        }
        path.pop_back();
        vis[src]=false;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>path;
        vector<bool> vis(n,false);
        dfs(graph,0,vis,path);
        return ans;
    }
};