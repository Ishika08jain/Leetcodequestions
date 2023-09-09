class Solution {
public:
    int solve(int target, vector <int> &nums, vector <int>&dp){
        if(target ==0){
            return 1;
        }
        if(dp[target] != -1){
            return dp[target];
        }
        dp[target] =0;
        for(auto& it: nums){
            if(it <= target){
                dp[target] += solve(target - it, nums, dp);
            }
        }
        return dp[target];
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector <int> dp(target+1, -1);
       return solve(target, nums, dp);
    }
};