class Solution {
    private:
    void dfs(int x, int y, int oldc, int newc, map <pair <int, int>, bool>& vis,vector<vector<int>>& arr){
        vis[{x,y}] = true;
        arr[x][y]= newc;
        int dx[] = {-1,0,1,0};
        int dy[]= {0,1,0,-1};
        for(int i =0;i<4;i++){
            int newX = x+ dx[i];
            int newY = y + dy[i];
            if(newX >= 0 && newY >= 0 && newX < arr.size() && newY < arr[0].size() && !vis[{newX, newY}] && arr[newX][newY] == oldc){
                dfs(newX, newY, oldc , newc, vis, arr);
                
                
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldc = image[sr][sc];
        map <pair <int, int> ,bool> vis;
        vector<vector<int>> arr = image;
       dfs(sr,sc, oldc, color, vis, arr);
        return arr;
    }
};