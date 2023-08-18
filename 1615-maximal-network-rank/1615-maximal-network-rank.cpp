class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        int links[101][101] = {0};
        int deg[101] = {0};
        for(auto i: roads){
            links[i[0]][i[1]] = 1;
            links[i[1]][i[0]] = 1;
            deg[i[0]]++;
            deg[i[1]]++;
        }
        int res =0;
        for(int i =0;i<100;i++){
            for(int j =0;j<100;j++){
                if(i != j ){
                    int val = deg[i] + deg[j];
                    if(links[i][j])
                        val--;
                    
                    res =  max(val,res);
                }
            }
        }
        return res;
    }
};