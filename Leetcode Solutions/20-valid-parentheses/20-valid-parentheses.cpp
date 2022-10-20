class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        st.push(0);
        
        for(int i = 1;i<s.size();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                st.push(i);
                continue;
            }
            
            if(st.empty()) return false;
            else if(s[i]==')' and s[st.top()]!='(')
                return false;
            else if(s[i]=='}' and s[st.top()]!='{')
                return false;
            else if(s[i]==']' and s[st.top()]!='[')
                return false;
            
            st.pop();
        }
        
        return st.empty();
    }
};