class Solution {
public:
    bool isCycle(int src,vector<bool>& vis,vector<bool>& st,vector<vector<int>>& g){
        vis[src]=true;
        st[src]=true;
        for(auto v:g[src]){
            if(!vis[v]){
                if(isCycle(v,vis,st,g)) return true;
            }else if(st[v]) return true;
        }
        st[src]=false;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& pre) {

        vector<vector<int>> g(numCourses);
        for(auto u:pre){
            g[u[0]].push_back(u[1]);
        }
        vector<bool> vis(numCourses,false),st(numCourses,false);
        for(int i=0;i<numCourses;i++){
            if(!vis[i] && isCycle(i,vis,st,g)){
                return false;
            }
        }
        return true;
    }
};