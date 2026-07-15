class Solution {
public:
    pair<int,int> check(string& s,int i){
        int l=i,r=i;
        while(l>0 && r<s.size()-1 && s[l-1]==s[r+1]){
            l--;
            r++;
        }
        int j=i,k=i+1;
        while(j>=0 && k<s.size() && s[j]==s[k]){
            j--;k++;
        }
        int a=r-l+1,b=k-j-1;
        if(a>b){
            return {a,l};
        }
        return {b,j+1};
    }
    string longestPalindrome(string s) {
        if(s.size()<=1) return s;
        int ans=0;
        string res="";
        for(int i=0;i<s.size();i++){
            auto [len,l]=check(s,i);
            if(len>1 && len>ans){
                res=s.substr(l,len);
                ans=len;
            }
        }
        return res==""?res+s[0]:res;
    }
};