class Solution {
public:
    vector<vector<int>>dp;
    int solve(string& w1, string& w2,int i,int j){
        if(i==w1.size()) return w2.size()-j;
        if(j==w2.size()) return w1.size()-i;
        if(dp[i][j]!=-1)return dp[i][j];
        if(w1[i]==w2[j]){
            return dp[i][j]=solve(w1,w2,i+1,j+1);
        }

        return dp[i][j]=1+min({solve(w1,w2,i+1,j),solve(w1,w2,i+1,j+1),solve(w1,w2,i,j+1)});
    }
    int minDistance(string word1, string word2) {
        dp.assign(word1.size(),vector<int>(word2.size(),-1));
        return solve(word1,word2,0,0);
    }
};