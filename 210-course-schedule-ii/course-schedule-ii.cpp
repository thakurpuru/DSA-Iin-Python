class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<vector<int>> g(n);
        
        vector<int> indegree(n,0);
        for(auto u:prerequisites){
            g[u[1]].push_back(u[0]);
            indegree[u[0]]++;
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
        if(ans.size()!=n)return {};
        return ans;
    }
};