class Solution {
public:
    vector<string>ans;
    void combination(int i,unordered_map<int,string>&mp,string &dig,string s){
        if(i==dig.length()){
            ans.push_back(s);
            return;
        }
         int x=dig[i]-'0';
        for(int j=0;j<mp[x].size();j++){
           
            s+=mp[x][j];
            combination(i+1,mp,dig,s);
            
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string dig) {
        unordered_map<int,string>mp;
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        string s="";
       combination(0,mp,dig,s);
       return ans;
    }
};