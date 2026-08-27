class Solution {
public:
    int distributeCandies(vector<int>& can) {
        unordered_map<int,int>mp;
        for(int i=0;i<can.size();i++){
            mp[can[i]]++;
        }
        int n=can.size()/2;
        if(n<=mp.size()){
            return n;
        }
        return mp.size();
    }
};