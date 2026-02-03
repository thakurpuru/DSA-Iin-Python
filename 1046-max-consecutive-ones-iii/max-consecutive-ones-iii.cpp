class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();

        int i=0,j=0;
        int ans=0;
        while(i<n){
            if(nums[i]==0) k--;
            if(k<0){
                while(nums[j]!=0) j++;
                j++;
                k++;
            }
            ans=max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};