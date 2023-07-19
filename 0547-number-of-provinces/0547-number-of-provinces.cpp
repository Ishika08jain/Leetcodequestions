class Solution {
    private:
    void dfs(unordered_map <int, bool> & vis, int src,vector<vector<int>>& isConnected ){
        vis[src]= true;
        int size = isConnected[src].size();
        
        for(int col=0;col<size;col++){
            if( src != col && isConnected[src][col]== 1){
                if(!vis[col]){
                    dfs(vis, col, isConnected);
                }
            }
        }
    }
public:
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map  <int,bool> vis;
        int count =0;
        int n = isConnected.size();
        for(int i =0;i<n;i++){
            if(!vis[i]){
                dfs(vis, i, isConnected);
                count++;
            }
        }
        return count;
    }
};