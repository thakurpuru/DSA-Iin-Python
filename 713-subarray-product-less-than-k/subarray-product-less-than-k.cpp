class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int mul=1;
        int n=nums.size();
        int j=0,count=0;
        for(int i=0;i<n;i++){
            mul*=nums[i];
            while(j<i && mul>k) {
                mul/=nums[j];
                j++;
            }
            if(mul<k) count+=i-j+1;
        }
        return count;
    }
};