class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<vector<int>>& graph,int src,vector<int>& path){
        int n=graph.size();
        path.push_back(src);
        if(src==n-1){
            ans.push_back(path);
            
        }else{
            
            for(auto& v:graph[src]){
              
                dfs(graph,v,path);
            
            }

        }
        path.pop_back();
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>path;
       
        dfs(graph,0,path);
        return ans;
    }
};