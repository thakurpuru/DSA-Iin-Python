class Solution {
public:
    int findTheLongestSubstring(string s) {
        vector<int> freq1(32,-2);
        int dx[5]={1,2,4,8,16};
        string st="aeiou";
        int mask=0;
        freq1[0]=-1;
        int maxlen=0;
        for(int i=0;i<s.size();i++){
            
            for(int j=0;j<5;j++){
                if(s[i]==st[j]){
                    mask^=dx[j];
                    break;
                }
            }
            int prev=freq1[mask];
            if(prev==-2){
                freq1[mask]=i;
            }else{
                maxlen=max(maxlen,i-prev);
            }
        }
        return maxlen;
    }
};