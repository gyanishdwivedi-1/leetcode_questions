class Solution {
public:
    int ans(int i,vector<int>& costs,vector<int>&dp,int n){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];

        int mini=INT_MAX;

        for(int j=i+1;j<=i+3 && j<=n;j++){
            int next=ans(j,costs,dp,n);

            if(next!=INT_MAX){
                int a=costs[j-1]+(j-i)*(j-i)+next;
                mini=min(mini,a);
            }
        }

        dp[i]=mini;
        return dp[i];
    }

    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+1,-1);
        return ans(0,costs,dp,n);
    }
};