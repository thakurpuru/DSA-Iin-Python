class Solution {
public:
    bool solve(string& s,unordered_set<string>& st,int start,vector<int>& dp){
        if(start==(int)s.size()) return true;
        if(dp[start]!=-1) return dp[start];
        string match="";
        for(int i=start;i<s.size();i++){
            match.push_back(s[i]);
            if(st.count(match)){
                if(solve(s,st,i+1,dp)) return dp[start]=true;
            }
        }
        return dp[start]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>st(wordDict.begin(),wordDict.end());
        int n=s.size();
        vector<int> dp(n+1,-1);
        // dp[0]=true;
        return solve(s,st,0,dp);
    }
};