class Solution {
public:
    string customSortString(string o, string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        string ans="";
        unordered_map<char,bool>m;
        for(int i=0;i<o.size();i++){
            if(mp.find(o[i])!=mp.end()){
                m[o[i]]=true;
                    for(int j=0;j<mp[o[i]];j++){
                        ans+=o[i];
                    }
            }
        }
      string st="";
      for(int i=0;i<s.size();i++){
        if(m.find(s[i])==m.end()){
            st+=s[i];
        }
      }
    //   sort(st.begin(),st.end());
     ans+=st;
        return ans;
    }
};