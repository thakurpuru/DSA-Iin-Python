class Solution {
public:
    string pushDominoes(string dominoes) {
        string s="L"+dominoes+"R";
        int prev=0;
        string res="";
        for(int i=1;i<s.size();i++){
            if(s[i]=='.') continue;
            int sz=i-prev-1;
            if(prev>0){
                res+=s[prev];
            }
            if(s[prev]==s[i]){
                res+=string(sz,s[i]);
            }else if(s[prev]=='L' && s[i]=='R'){
                res+=string(sz,'.');
            }else{
                res+=string(sz/2,'R')+string(sz%2,'.')+string(sz/2,'L');

            }
            prev=i;
        }
        return res;
    }
};