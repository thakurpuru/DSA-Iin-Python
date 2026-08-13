class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        stack<int> st,st1;
        vector<int> vec(n,n),vec1(n,-1);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[i]<=heights[st.top()]) st.pop();
            if(!st.empty()) vec[i]=st.top();
            st.push(i);
        }
        for(int k=0;k<n;k++){
            while(!st1.empty() && heights[k]<=heights[st1.top()]) st1.pop();
            if(!st1.empty()) vec1[k]=st1.top();
            st1.push(k);
            ans=max(ans,heights[k]*(vec[k]-vec1[k] -1));
        }
        return ans;
    }
};