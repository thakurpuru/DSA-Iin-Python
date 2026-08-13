class Solution {
public:
    pair<int,int> check(string& s,int l,int r){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        return {r-l-1,l+1};
    }
    string longestPalindrome(string s) {
        int ans=0,j=-1;
        for(int i=0;i<s.size();i++){
            auto a=check(s,i,i);
            auto b=check(s,i,i+1);
            if(a.first>ans){
                ans=a.first;
                j=a.second;
            }
            if(b.first>ans){
                ans=b.first;
                j=b.second;
            }
        }
        return s.substr(j,ans);
    }
};