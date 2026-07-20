class Solution {
public:
    vector<int> dp;
    bool solve(vector<int>& nums,int i){
        int n=nums.size();
        if(i==n-1) return true;
        if(i>=n) return false;
        if(dp[i]!=-1) return dp[i];
        for(int j=1;j<=nums[i];j++){
            if(solve(nums,i+j)) return dp[i]=true;
        }
        return dp[i]=false;
    }
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        // dp.assign(nums.size(),-1);
        for(int i=0;i<n-1;i++){
            if(nums[i]==0){
                bool flag=false;
                for(int j=i-1;j>=0;j--){
                    if(nums[j]>(i-j)){
                        flag=true;
                        break;
                    }
                }
                if(!flag) return false;
            }
        }
        return true;
    }
};