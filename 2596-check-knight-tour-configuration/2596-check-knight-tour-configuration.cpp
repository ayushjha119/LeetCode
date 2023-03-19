class Solution {
    bool solve(vector<vector<int>>& grid, int i, int j, int& n, int t)
    {
        if(i < 0 || i >= n || j < 0 || j >= n) return false;
        if(grid[i][j] != t) return false;
        if(grid[i][j] == n*n-1 && t == n*n-1) return true;
        return solve(grid, i+2, j+1, n, t+1) || solve(grid, i+2, j-1, n, t+1) ||
                solve(grid, i-2, j+1, n, t+1) || solve(grid, i-2, j-1, n, t+1) ||
                solve(grid, i+1, j+2, n, t+1) || solve(grid, i+1, j-2, n, t+1) ||
                solve(grid, i-1, j+2, n, t+1) || solve(grid, i-1, j-2, n, t+1);
    }
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        return solve(grid, 0, 0, n, 0);
    }
};