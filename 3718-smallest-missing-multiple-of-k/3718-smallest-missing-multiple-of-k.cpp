class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,bool>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                mp[nums[i]/k]=true;
            }
        }
        for(int i=1;i<=mp.size();i++){
            if(mp[i]!=true){
                return i*k;
            }
        }
        return k*(mp.size()+1);
    }
};