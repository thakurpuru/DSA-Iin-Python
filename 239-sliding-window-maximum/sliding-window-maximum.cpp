class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> mx;
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(!mx.empty() && mx.front()<=i-k){
                mx.pop_front();
            }
            while(!mx.empty() && nums[mx.back()]<nums[i]){
                mx.pop_back();
            }
            mx.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[mx.front()]);
            }
        }
        return ans;
    }
};