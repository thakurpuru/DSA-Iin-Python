class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum=0,len=INT_MAX;
        int j=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                len=min(len,i-j+1);
                sum-=nums[j];
                j++;
            }
           
        }
        return len==INT_MAX?0:len;
    }
};