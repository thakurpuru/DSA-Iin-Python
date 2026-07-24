class Solution {
public:
    string minWindow(string s, string t) {
        int j=0;
        unordered_map<char,int> mp1,mp2;
      
        for(char c:t){
            mp1[c]++;
        }
        int n=t.size(),k=0;
        if(n>s.size()) return "";
        int len=INT_MAX;
        int count=0;
        for(int i=0;i<s.size();i++){
            mp2[s[i]]++;
            if(mp1.count(s[i]) && mp2[s[i]]<=mp1[s[i]]){
                count++;

            }
            while(count==n ){
                if(i-j+1<len){
                    len=i-j+1;
                    k=j;
                }
                mp2[s[j]]--;
                if(mp1.count(s[j]) && mp2[s[j]]<mp1[s[j]]){
                    count--;
                }
                j++;
            }

        }
        
        return len!=INT_MAX?s.substr(k,len):"";
    }
};