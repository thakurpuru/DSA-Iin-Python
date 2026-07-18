class Solution {
public:
    int solve(string s,int l,int r){
        int count=0;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            count++;
            r++;l--;
        }
        return count;
    }
    int countSubstrings(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans+=solve(s,i,i);
            ans+=solve(s,i,i+1);
        }
        return ans;
    }
};