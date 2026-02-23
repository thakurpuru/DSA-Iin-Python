class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> st;
        string s1="";
        int i=0,j=0;
        while(i<s.size()){
            string s1=s.substr(i,k);
            if(s1.size()==k)
            st.insert(s1);
            i++;
            if(st.size()==(1<<k)){
                return true;
            }
        }
        return false;
    }
};