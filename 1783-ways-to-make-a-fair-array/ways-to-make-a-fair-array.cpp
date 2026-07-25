class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n=nums.size();
        vector<int> evenP(n+1,0),oddP(n+1,0);
        for(int i=0;i<n;i++){
            evenP[i+1]=evenP[i];
            oddP[i+1]=oddP[i];
            if(i%2==0){
                evenP[i+1]+=nums[i];
                
            }else{
                oddP[i+1]+=nums[i];
                
            }
        }
        vector<int> evenS(n+1,0),oddS(n+1,0);
        for(int i=n-1;i>=0;i--){
            evenS[i]=evenS[i+1];
            oddS[i]=oddS[i+1];
            if(i%2==0){
                evenS[i]+=nums[i];
                
            }else{
                oddS[i]+=nums[i];
                
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(evenP[i]+oddS[i+1]==evenS[i+1]+oddP[i]){
                count++;
            }
        }
        return count;
    }
};