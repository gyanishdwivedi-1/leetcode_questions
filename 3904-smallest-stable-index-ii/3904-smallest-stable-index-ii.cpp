class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       int n=nums.size();
       vector<int>premax(n);
       vector<int>sufmin(n);
       int maxi=INT_MIN;
       for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            premax[i]=maxi;
       } 
       int mini=INT_MAX;
       for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            sufmin[i]=mini;
       }
       int ans=-1;
       for(int i=0;i<n;i++){
            if(premax[i]-sufmin[i]<=k) return i;
       }
       return ans;
    }
};