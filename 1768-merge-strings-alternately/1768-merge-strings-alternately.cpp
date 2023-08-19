class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.size();
        int m = word2.size();
        int i =0,j=0;
        while(i < n && j < m){
            ans += word1[i];
            i++;
            ans+= word2[j];
            j++;    
        }
        while(i <= n-1){
            ans+= word1[i];
            i++;
        }
        while(j <= m-1){
            ans+= word2[j];
            j++;
        }
        
        return ans;
    }
};