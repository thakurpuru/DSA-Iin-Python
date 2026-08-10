class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int>dist(n,INT_MAX);
        vector<vector<pair<int,int>>> g(n);
        for(auto f:flights){
            g[f[0]].push_back({f[1],f[2]});
        }
        using T=tuple<int,int,int>;
        queue<T> q;
        q.push({src,0,-1});
        while(!q.empty()){
            auto [u,d,stops]=q.front();
            q.pop();
            for(auto &[v,wt]:g[u]){
                if(dist[v]>d+wt && stops+1<=k){
                    dist[v]=d+wt;
                    q.push({v,dist[v],stops+1});
                }
            }
        }
        return dist[dst]==INT_MAX?-1:dist[dst];
    }
};