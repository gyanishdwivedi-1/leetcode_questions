class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int ans=0;
        int maxi=INT_MIN;
        bool odd=false;
        for (auto i:mp){
            if(i.second%2==0){
                ans+=i.second;
            }
            else{
                odd=true;
               ans+=i.second-1;
            }
        }
        if(odd){
            ans++;
        }
        return ans;
    }
};