class Solution {
public:
    bool cycle(int u,vector<bool>& vis,vector<bool>& st,vector<vector<int>>& g){
        vis[u]=true;
        st[u]=true;
        for(int v:g[u]){
            if(!vis[v]){
                if(cycle(v,vis,st,g)) return true;

            }else if(st[v]) return true;
        }
        st[u]=false;
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<vector<int>> g(n);
        vector<bool> vis(n,false),st(n,false);
        vector<int> indegree(n,0);
        for(auto u:prerequisites){
            g[u[1]].push_back(u[0]);
            indegree[u[0]]++;
        }
        for(int i=0;i<n;i++){
            if(!vis[i] && cycle(i,vis,st,g)) return {};
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> ans;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            ans.push_back(u);
            for(int v:g[u]){
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                }
            }
        }
        return ans;
    }
};