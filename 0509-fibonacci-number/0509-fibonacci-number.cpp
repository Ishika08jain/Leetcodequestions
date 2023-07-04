class Solution {
public:
    int recSolve(int n){
        if(n==1 || n==0){
            return n;
        }
        int ans = recSolve(n-1) + recSolve(n-2);
        return ans;
        
    }
    int topDown(vector <int> &dp, int n){
         if(n==1 || n==0){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = topDown(dp, n-1) + topDown(dp,n-2);
        return dp[n];
        
    
        
    }
    int fib(int n) {
       vector <int> dp(n+1,-1);
        int ans = topDown(dp, n);
        return ans;
    
        
        
    }
};