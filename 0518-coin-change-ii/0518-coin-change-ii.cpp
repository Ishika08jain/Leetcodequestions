class Solution {
public:
    int solve(int amount, vector <int> &coins, int index, vector <vector <int> > &dp){
        if(index ==0 ){
            return (amount % coins[0] ==0);
        }
        if(dp[index][amount] != -1){
            return dp[index][amount];
        }
        
        int notTake = solve(amount, coins, index-1, dp);
        int take =0;
        if(coins[index] <= amount){
            take = solve(amount - coins[index], coins, index, dp);
        }
        return dp[index][amount] = take + notTake;
    }
    int change(int amount, vector<int>& coins) {
          int n = coins.size();
        vector <vector <int> > dp(n, vector<int> (amount+1, -1));

        return solve(amount , coins, n-1, dp);
    }
};