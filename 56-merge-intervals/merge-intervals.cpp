class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int n=intervals.size();
        ans.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            auto a=ans.back();
            if(a[1]>=intervals[i][0]){
                ans.pop_back();
                ans.push_back({a[0],max(a[1],intervals[i][1])});
            }else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};