class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int i=0,n=cardPoints.size();
        int j=n-1;
        int min_ksum=INT_MAX;
        int sum=0;
        int total=accumulate(cardPoints.begin(),cardPoints.end(),0);
        for(int i=0;i<n-k;i++){
            sum+=cardPoints[i];
        }
        min_ksum=min(min_ksum,sum);
        for(int i=n-k;i<n;i++){
            sum+=cardPoints[i];
            sum-=cardPoints[i-n+k];
            min_ksum=min(min_ksum,sum);
        }
        // while(k>0 && i<=j){
        //     if(cardPoints[i]>cardPoints[j]){
        //         ans+=cardPoints[i];
        //         i++;
        //     }else{
        //         ans+=cardPoints[j];
        //         j--;
        //     }
        //     k--;
        // }
        return total-min_ksum;
    }
};