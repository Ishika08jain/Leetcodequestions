class Solution {
public:
 
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](const std ::vector <int> &a, const std:: vector <int> &b )-> bool{
             return a[1] < b[1];
    
        });
        int n = pairs.size();
        vector <int> dp (n,1);
        for(int i=0;i<n;i++){
            for(int j =0;j<i;j++){
                if(pairs[j][1] < pairs[i][0]){
                    dp[i] = max(dp[i], dp[j] +1);
                    
                }
            }
        }
        int maxi =0;
        for(int i=0;i<n;i++){
        if(dp[i] > maxi){
            maxi = dp[i];
        }
        }
        return maxi;
        
}
};