class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='{' || s[i]=='(' || s[i]=='[')
                st.push(s[i]);
            else {
                if(st.empty()) return false;
                char curr = st.top();
                st.pop();
                if(!valid(curr,s[i])) 
                    return false;
            }
        }
        if(st.empty()) return true;
        else return false;
    }
    
    bool valid(char a, char b) {
        if(a=='{' && b=='}')
            return true;
        else if (a=='[' && b==']')
            return true;
        else if (a=='(' && b==')')
            return true;
        return false;
    }
};