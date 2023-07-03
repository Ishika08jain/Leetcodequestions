class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> rows;
        unordered_set<int> col;
       
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(matrix[i][j] ==0){
                    rows.insert(i);
                    col.insert(j);
                }
               
            }
        }
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(rows.count(i)>0 || col.count(j)>0){
                    matrix[i][j] =0;
                }
            }
        }
        
    }
};