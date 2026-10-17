class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]=i;
        }
        int maxi=mp[s[0]];
        int maxlen=0;
        vector<int>ans;
        int l=0;
        int r=0;
      
        unordered_map<char,bool>m;
        m[s[0]]=true;
        while(r<n){
            if(mp[s[r]]>maxi){
                maxi=mp[s[r]];
            }
            if(r==maxi){
                ans.push_back(r-l+1);
                l=r+1;
            }
            m[s[r]]=true;
            r++;
        }
        return ans;
    }
};