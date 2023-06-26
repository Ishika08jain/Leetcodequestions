class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> p(numRows);
        int i =0;
        for(int i =0;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    p[i].push_back(1);
                }else{
                    p[i].push_back(p[i-1][j-1] + p[i-1][j]);
                }
                
            }
        }
        
            return p;
        
        
        
    }
};