class Solution {
public:
    bool solve(string s1, string s2, string s3, int i, int j, int k, vector <vector <int>> &m){
        if(m[i][j] != -1){
            return m[i][j];
        }
        if(i == s1.length() && j == s2.length() && k == s3.length()){
            return true;
        }
        bool x = false, y = false;
        if(i != s1.length()){
            if(s1[i] == s3[k]){
                x=  solve(s1,s2,s3,i+1,j,k+1,m);
            }
            
        }
        if(j != s2.length()){
            if(s2[j] == s3[k]){
                y= solve(s1,s2,s3,i,j+1,k+1,m);
            }
        }
        return m[i][j] = x||y;
    }
    bool isInterleave(string s1, string s2, string s3) {
        int a = s1.length();
        int b = s2.length();
        int c = s3.length();
        vector <vector <int>> m(a+1, vector <int> (b+1, -1));
        int i=0, j=0,k=0;
        return solve(s1,s2,s3,i,j,k,m);
        
    }
};