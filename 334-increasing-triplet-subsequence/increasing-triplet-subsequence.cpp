class Solution {
public:
    bool solve(vector<int>& nums,int i,int cnt,int prev){
        if(cnt>=3) return true;
        if(i>=nums.size()) return false;
        if(prev!=-1 && nums[prev]>nums[i]) return false;
        for(int j=i;j<nums.size();j++){
            if(solve(nums,j+1,cnt+1,i)) return true;
        }
        return false;
    }
    bool increasingTriplet(vector<int>& nums) {
        // return solve(nums,0,0,-1);
        int min1=INT_MAX,min2=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=min1) min1=nums[i];
            else if(nums[i]<=min2) min2=nums[i];
            else return true;
        }
        return false;
    }
};