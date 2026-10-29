class Solution {
public:
    int sorts(int n,unordered_map<int, int> &dp){
        if(n==1) return 0;
        if (dp.find(n) != dp.end()) return dp[n];
        int x=0;
        if(n%2==0){
              x=1+sorts(n/2,dp);
        }
        else{
            x=1+sorts(3*n+1,dp);
        }
        return dp[n]=x;
         
    }
    int getKth(int lo, int hi, int k) {
        unordered_map<int,int>dp;
        if(lo==1 && hi==1) return 1;
        vector<pair<int,int>>v;
        for(int i=lo;i<=hi;i++){
            int x=sorts(i,dp);
            v.push_back({x,i});

        }
        sort(v.begin(),v.end());
       
      
        return v[k-1].second;
    }
};