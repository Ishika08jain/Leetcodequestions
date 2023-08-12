class Solution {
public:
    int ans =1;
    int res =0;
    void dfs(int i, int j, vector <vector <int>> &grid, int count){
        if(i <0 || i >= grid.size() || j <0 || j >= grid[0].size() || grid[i][j] == -1){
         return;
        }
        if(grid[i][j] == 2){
            if(count == ans){
                res++;
            }
            
           return;
        }
        grid[i][j] = -1;
        dfs(i+1, j, grid, count+1);
        dfs(i-1, j, grid, count+1);
        dfs(i, j+1,grid, count+1);
        dfs(i,j-1, grid, count+1);
        
        grid[i][j] = 0;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
      
        int n = grid.size();
        int m = grid[0].size();
        
        int x,y;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j] == 1){
                    x=i;
                    y=j;
                }
                else if(grid[i][j]==0){
                    ans++;
                }
            }
            
        }
        dfs(x,y,grid,0);
        return res;
    }
};