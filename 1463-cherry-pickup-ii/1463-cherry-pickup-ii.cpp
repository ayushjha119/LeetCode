class Solution {
public:
    int fun(vector<vector<int>>& grid, int i, int j1, int j2, int r, int c,
            vector<vector<vector<int>>>& dp) {

        if (j1 < 0 || j2 < 0 || j1 >= c || j2 >= c) {
            return -1e8;
        }

        if (i == grid.size() - 1) {
            if (j1 == j2)
                return grid[i][j1];
            else
                return grid[i][j1] + grid[i][j2];
        }
        if (dp[i][j1][j2] != -1)
            return dp[i][j1][j2];
        // int dj[]={-1,0,+1};
        int maxi = 0;
        for (int dj1 = -1; dj1 <= 1; dj1++) {
            for (int dj2 = -1; dj2 <= 1; dj2++) {
                if (j1 == j2) {
                    maxi = max(maxi, grid[i][j1] + fun(grid, i + 1, j1 + dj1,
                                                       j2 + dj2, r, c, dp));
                } else {
                    maxi = max(maxi, grid[i][j1] + grid[i][j2] +
                                         fun(grid, i + 1, j1 + dj1, j2 + dj2, r,
                                             c, dp));
                }
            }
        }
        return dp[i][j1][j2] = maxi;
    }

    int cherryPickup(vector<vector<int>>& grid) {

        int row = grid.size();
        int col = grid[0].size();

        vector<vector<vector<int>>> dp(
            row, vector<vector<int>>(col, vector<int>(col, -1)));

        return fun(grid, 0, 0, col - 1, row, col, dp);
    }
};