class Solution {
public:
    vector<string>ans;
    void paren(int i,string &s,char c,int n,unordered_map<char,int>mp){
       if(mp[c]==n){
        if(s.length()==2*n){
            ans.push_back(s);
        }
        return;
       }
         s+=c;
         cout<<s<<" ";
         mp[c]++;
        paren(i+1,s,'(',n,mp);
        if(mp['(']>mp[')']){
        paren(i+1,s,')',n,mp);
        }
       mp[c]--;
        s.pop_back();
        

    }
    vector<string> generateParenthesis(int n) {
        string s="";
        unordered_map<char,int>mp;
        paren(0,s,'(',n,mp);
        return ans;
    }
};