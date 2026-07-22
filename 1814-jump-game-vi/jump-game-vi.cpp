class Solution {
public:
    vector<int> dp;
    int solve(vector<int>& nums, int k,int i){
        int n=nums.size();
        if(i==n-1) return 0;
        if(i>=n) return INT_MIN;
        if(dp[i]!=INT_MIN) return dp[i];
        int ans=INT_MIN;
        for(int j=i+1;j<=min(i+k,n-1);j++){
            int a=solve(nums,k,j);
            if(a!=INT_MIN){
                ans=max(ans,nums[j]+a);
            }
        }
        return dp[i]=ans;
    }
    int maxResult(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> dp(n,0);
        dp[0]=nums[0];
        deque<int> dq;
        dq.push_back(0);
        for(int i=1;i<n;i++){
            if(dq.front()<i-k){
                dq.pop_front();
            }
            dp[i]=nums[i]+dp[dq.front()];
            while(!dq.empty() && dp[dq.back()]<=dp[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        return dp[n-1];
    }
};