class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector<vector<pair<int,int>>> g(n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int x1=points[i][0],y1=points[i][1];
                int x2=points[j][0],y2=points[j][1];
                int val=abs(x1-x2)+abs(y1-y2);
                g[i].push_back({j,val});
                g[j].push_back({i,val});

            }
        }
        int total=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;
        vector<bool> vis(n);
        pq.push({0,0});
        while(!pq.empty()){
            auto [d,u]=pq.top();
            pq.pop();
            if(!vis[u]){
                vis[u]=true;
                total+=d;
                for(auto [v,wt]:g[u]){
                    if(!vis[v]){
                        pq.push({wt,v});
                    }
                }
            }
        }
        return total;
    }
};