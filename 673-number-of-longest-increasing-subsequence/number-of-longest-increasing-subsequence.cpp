class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> len(n,1),cnt(n,1);
        int mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(len[i]==len[j]+1) cnt[i]+=cnt[j];
                    else if(len[i]<len[j]+1){
                        len[i]=len[j]+1;
                        cnt[i]=cnt[j];
                    }
                }
            }
            mx=max(mx,len[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(len[i]==mx){
                ans+=cnt[i];
            }
        }
        return ans;
    }
};