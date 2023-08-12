class Solution {
public:
 
 int uniquePathsWithObstacles(vector<vector<int>>& grid) {
     
 int m = grid.size();
  int n = grid[0].size();
     vector <vector < int>> dp(m, vector <int> (n, -1));
        return dfs(grid, 0,0, dp);
    }
    int dfs(vector<vector<int>>& grid, int row, int col, vector <vector < int>>& dp){
        if(row <0 || col <0 || row == grid.size() || col == grid[0].size()  || grid[row][col]==1){
            return 0;
        }
       
        if(row == grid.size()-1 &&  col == grid[0].size()-1){
            return 1;
        }
        if(dp[row][col] > -1){
            return dp[row][col];
        }
        dp[row][col] = dfs(grid, row+1, col, dp) + dfs(grid, row, col+1, dp);
        return dp[row][col];
    }
};