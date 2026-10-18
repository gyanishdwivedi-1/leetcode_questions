class Solution {
public:
    int ans(int i,vector<int>& nums,int target,vector<unordered_map<int,int>>& dp,int n){
        if(i==n && target!=0) return 0;
       // if(i<n && target<=0) return 0;
        if(i==n && target==0) return 1;
        if(dp[i].count(target)) return dp[i][target];
        int first=ans(i+1,nums,target-nums[i],dp,n);
        int second=ans(i+1,nums,target+nums[i],dp,n);
        return dp[i][target]=first+second;
      

    }
    int findTargetSumWays(vector<int>& nums, int target) {
      int n=nums.size();int m=target;
    vector<unordered_map<int,int>> dp(n);
        return ans(0,nums,target,dp,n);
    }
};