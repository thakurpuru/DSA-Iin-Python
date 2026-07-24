class Solution {
public:
    int solve(vector<int>& h, int b, int l,int i){
        int n=h.size();
        if(i==n-1) return i;
        if(h[i+1]>h[i] && b<h[i+1]-h[i] && l==0) return i;
        int ans=0;
        if(i+1<n && h[i]>=h[i+1]){
            ans=max(ans,solve(h,b,l,i+1));
        }else{
            if(i+1<n && h[i+1]-h[i]<=b){
                ans=max(ans,solve(h,b-h[i+1]+h[i],l,i+1));
            }
            if(l>0){
                ans=max(ans,solve(h,b,l-1,i+1));
            }
        }
        return ans;
    }
    int furthestBuilding(vector<int>& heights, int b, int l) {
        int n=heights.size();
        priority_queue<int,vector<int>,greater<>>pq;
        
        for(int i=0;i<n-1;i++){
            int diff=heights[i+1]-heights[i];
            if(diff<0) continue;
            pq.push(diff);

            if(pq.size()>l){
                b-=pq.top();
                pq.pop();
            }
            if(b<0) return i;
            
        }
        return n-1;
    }
};