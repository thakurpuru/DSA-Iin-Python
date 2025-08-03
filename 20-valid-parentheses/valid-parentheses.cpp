class Solution {
public:
    bool isValid(string s) {
       stack<char> s1;
       for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                s1.push(s[i]);
            }else if(s[i]==')' || s[i]=='}' || s[i]==']'){
                char c=s[i];
                if(s1.empty()) return false;
                char t=s1.top();
                if(c==')' && t=='(') s1.pop();
                else if(c=='}' && t=='{') s1.pop();
                else if(c==']' && t=='[') s1.pop();
                else return false;
            }else return false;
       }
       return s1.empty(); 
    }
};