class Solution {
public:
    const int mod = 1e9 + 7;

    int mirr(int i, int j, vector<vector<int>>& grid, vector<vector<vector<int>>>& dp, pair<int,int> prev, pair<int,int> curr, int n, int m) {
        if (i >= n || j >= m) return 0;
        if (i == n - 1 && j == m - 1) return 1;

        // direction we arrived with, taken from the pair
        int dir = (prev.second == curr.second - 1) ? 0 : 1; // 0 = came moving right, 1 = came moving down

        if (dp[i][j][dir] != -1) return dp[i][j][dir];

        int x = 0;
        int y = 0;
        int a = 0;
        int b = 0;
        if (grid[i][j] == 0) {
            x = mirr(i, j + 1, grid, dp, curr, {i, j + 1}, n, m);
            y = mirr(i + 1, j, grid, dp, curr, {i + 1, j}, n, m);
        }
        else {
            if (prev.second == curr.second - 1) {
                a = mirr(i + 1, j, grid, dp, curr, {i + 1, j}, n, m);
            }
            else if (prev.first == curr.first - 1) {
                b = mirr(i, j + 1, grid, dp, curr, {i, j + 1}, n, m);
            }
        }
        dp[i][j][dir] = (x + y + a + b) % mod;
        return dp[i][j][dir];
    }

    int uniquePaths(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        pair<int,int> prev = {0, -1}; // treat the start as arrived moving right (start cell is empty, so it doesn't matter)
        pair<int,int> curr = {0, 0};
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(2, -1)));
        int ans = mirr(0, 0, grid, dp, prev, curr, n, m);
        return ans;
    }
};