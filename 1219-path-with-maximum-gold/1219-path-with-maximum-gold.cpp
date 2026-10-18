class Solution {
public:
    int ans(int i,int j,int sum,vector<vector<int>>& grid,int &maxi,vector<vector<bool>>&vis,int m,int n){
        if(i>=n || j>=m || i<0 || j<0 || vis[i][j] || grid[i][j] == 0)  return 0;
          sum+=grid[i][j];
          maxi = max(maxi, sum);
        vis[i][j]=true;
        int a=ans(i,j+1,sum,grid,maxi,vis,m,n);
         int b=ans(i,j-1,sum,grid,maxi,vis,m,n);
         int c=ans(i+1,j,sum,grid,maxi,vis,m,n);
        int d=ans(i-1,j,sum,grid,maxi,vis,m,n); 
        vis[i][j]=false;
        return maxi;
    
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int maxi=0;
      int ansi=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
               if (grid[i][j] != 0){
                    ansi=max(ansi,ans(i, j, 0, grid, maxi, vis, m, n));
            }
        }
      }
      return ansi;
    }
};