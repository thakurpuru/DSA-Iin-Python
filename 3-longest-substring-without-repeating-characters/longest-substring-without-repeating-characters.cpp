class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=1,j=0;
        if(s=="") return 0;
        unordered_map<char,int> freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            while(j<s.size() && freq[s[i]]>1){
                freq[s[j]]--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};