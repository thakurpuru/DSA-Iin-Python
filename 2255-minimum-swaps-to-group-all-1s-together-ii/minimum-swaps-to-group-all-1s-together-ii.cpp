class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        for(int i:nums){
            if(i==1) k++;
        }
        if(k==1) return 0;
        int ans=INT_MAX;
        int count=0;
        for(int i=0;i<k;i++){
            if(nums[i]==0)count++;
        }
        ans=min(ans,count);
        for(int i=k;i<2*n;i++){
            int j=i%n;
            if(nums[j]==0)count++;
            if(nums[(i-k)%n]==0) count--;
            ans=min(ans,count);
        }
        return ans;
    }
};