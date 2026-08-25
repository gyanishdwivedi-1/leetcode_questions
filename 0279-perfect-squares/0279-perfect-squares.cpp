class Solution {
public:
    int persquare(int i,int target,int &x,vector<int>&dp){
        if(target==0){
            return 0;
        }
        
        if(dp[target]!=-1) return dp[target];
        int mini=1e9;
       
        for(int j=1;j<=x;j++){
         long long a=1LL * j*j;
           if(a>target) break;
            int curr=persquare(j,target-a,x,dp);
             mini=min(mini,curr+1);
            
        }
        return dp[target]=mini;
    }
    int numSquares(int n) {
        int x=sqrt(n);
       vector<int>dp(n+1,-1);
        int ans=persquare(0,n,x,dp);
        return ans;
    }
};