class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.length();
        int i=0;
        while(i<n){
            if(st.empty()) {
                    st.push(s[i]);
            }
           else if((st.top()=='[' && s[i]==']') || (st.top()=='(' && s[i]==')') || (st.top()=='{' &&s[i]=='}')){
            st.pop();
           }
           else{
            st.push(s[i]);
           }
           i++;
        }
        return st.empty();
    }
};