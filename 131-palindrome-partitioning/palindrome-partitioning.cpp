class Solution {
public:
    bool isPalindrome(string s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    vector<vector<string>> ans;
    void solve(string s,vector<string>& path){
        if(s.size()==0){
            ans.push_back(path);
            return;
        }
        for(int i=1;i<=s.size();i++){
            string pre=s.substr(0,i);
            string rem=s.substr(i);
            if(isPalindrome(pre,0,pre.size()-1)){
                path.push_back(pre);
                solve(rem,path);
                path.pop_back();
            }

        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> path;
        solve(s,path);
        return ans;
    }
};