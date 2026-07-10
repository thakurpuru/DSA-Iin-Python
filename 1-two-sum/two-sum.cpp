class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            int a=target-nums[i];
            if(mp.count(a)){
                return {i,mp[a]};
            }
            mp[nums[i]]=i;
        }
        return {0,0};
    }
};