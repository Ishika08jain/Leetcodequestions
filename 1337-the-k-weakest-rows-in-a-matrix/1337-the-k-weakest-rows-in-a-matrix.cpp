class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector <int> count;
        vector <int> res;
        for(int i =0;i<mat.size();i++){
            int soldiers =0;
            for(int j = 0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    soldiers++;
                }else
                    break;
            }
            count.push_back(soldiers* 1000 + i);
        }
        sort(count.begin(),count.end());
        for(int i =0;i<k;i++){
            res.push_back(count[i] % 1000);
        }
        return res;
    }
};