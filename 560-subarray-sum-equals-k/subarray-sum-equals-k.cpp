class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int sum=0,ans=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int t=sum-k;
            if(mp.count(t)){
                ans+=mp[t];
            }
            mp[sum]++;
        }
        return ans;
    }
};