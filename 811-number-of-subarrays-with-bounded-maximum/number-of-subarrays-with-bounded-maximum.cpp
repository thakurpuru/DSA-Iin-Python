class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int n=nums.size();
        deque<int> dq;
        int ans=0,j=-1,k=-1;
        for(int i=0;i<n;i++){
            if(nums[i]>right)
                j=i;
            if(nums[i]<=right && nums[i]>=left)
                k=i;
            ans+=max(0,k-j);
        }
        return ans;
    }
};