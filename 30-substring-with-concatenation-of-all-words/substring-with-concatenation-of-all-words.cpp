class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        map<string,int> mp,mp1;
        for(string s:words){
            mp[s]++;
        }
        int n=s.size();
        int m=words[0].size();
        int No_word=words.size();
        vector<int> ans;
        
        
        for(int i=0;i<m;i++){
            mp1.clear();
            int start=i;
            int count=0;
            for(int j=i;j+m<=n;j+=m){
                string st=s.substr(j,m);
                if(mp.count(st)){
                    mp1[st]++;
                    count++;
                    while(mp1[st]>mp[st]){
                        string p=s.substr(start,m);
                        mp1[p]--;
                        start+=m;
                        count--;
                    }
                    if(count==No_word){
                        ans.push_back(start);

                        string p = s.substr(start, m);
                        mp1[p]--;
                        start += m;
                        count--;
                    }
                }else{
                    count=0;
                    start=j+m;
                    mp1.clear();
                }
                
            }
        }
        
        return ans;

    }
};