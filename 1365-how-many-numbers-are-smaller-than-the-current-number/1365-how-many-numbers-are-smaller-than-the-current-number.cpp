class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<pair<int,int>>v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        vector<int>ans(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(v[i].first)!=mp.end()) {
                 ans[v[i].second]=mp[v[i].first];
                 }
            else{
            ans[v[i].second]=i;
            mp[v[i].first]=i;
            }
        }
        return ans;
    }
};