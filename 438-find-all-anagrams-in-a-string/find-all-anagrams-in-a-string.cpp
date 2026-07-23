class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k=p.size();
        int n=s.size();
        if(k>n) return {};
        vector<int> frq1(26,0),frq2(26,0),ans;
        for(char c:p)frq1[c-'a']++;
        for(int i=0;i<k;i++){
            frq2[s[i]-'a']++;
        }
        if(frq1==frq2) ans.push_back(0);
        for(int i=k;i<n;i++){
            frq2[s[i]-'a']++;
            frq2[s[i-k]-'a']--;
            if(frq2==frq1) ans.push_back(i-k+1);
        }
        return ans;
    }
};