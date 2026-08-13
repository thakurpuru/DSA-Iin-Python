class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=s.size()-1;
        while(i<=j && s[i]==' ') i++;
        while(j>=0 && s[j]==' ') j--;
        string ans="";
        int k=j;
        for(;k>=i;){
            while(k>=0 && s[k]==' ') k--;
            string t="";
            while(k>=0 && s[k]!=' '){
                t=s[k]+t;
                k--;
            }
            if(!ans.empty()) ans+=" ";
            ans+=t;
        }
        return ans;
    }
};