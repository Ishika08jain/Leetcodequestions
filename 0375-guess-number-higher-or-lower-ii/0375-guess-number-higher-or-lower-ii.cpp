class Solution {
public:
    int solveUsingMem(int s, int e, vector <vector <int>> & dp){
        if(s>=e){
            return 0;
        }
        if(dp[s][e] != -1){
            return dp[s][e];
        }
        int ans = INT_MAX;
        for(int i=s;i<=e;i++){
            ans = min(ans, i + max(solveUsingMem(s, i-1, dp),solveUsingMem(i+1, e, dp)));
            
        }
        dp[s][e] = ans;
        return dp[s][e];
    }
//     int solveUsingRec(int s, int e){
//         if(s>=e){
//             return 0;
//         }
//         int ans = INT_MAX;
//         for(int i=s;i<=e;i++){
//             ans = min(ans, i + max(solveUsingRec(s, i-1),solveUsingRec(i+1, e)));
            
//         }
//         return ans;
//     }
    int getMoneyAmount(int n) {
        vector <vector <int>> dp(n+1, vector <int> (n+1, -1));
        int ans = solveUsingMem(1,n, dp);
        return ans;
    }
};