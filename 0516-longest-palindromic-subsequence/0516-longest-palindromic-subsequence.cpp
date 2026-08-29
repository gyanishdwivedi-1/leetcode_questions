class Solution {
public:
    int lcs(int ind1,int ind2,string &t1,string &t2,vector<vector<int>>&dp){
        if(ind1<0 || ind2<0){
            return 0;
        }
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        if(t1[ind1]==t2[ind2]) return dp[ind1][ind2]=1+lcs(ind1-1,ind2-1,t1,t2,dp);
        return dp[ind1][ind2]=max(lcs(ind1-1,ind2,t1,t2,dp),lcs(ind1,ind2-1,t1,t2,dp));
    }
    int longestPalindromeSubseq(string s) {
        int m=s.size();
        int n=s.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        string s2=s;
        reverse(s2.begin(),s2.end());
        return lcs(m-1,n-1,s,s2,dp); 
    }
};