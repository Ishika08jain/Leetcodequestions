class Solution {
public:
//     int solveRec(vector <int> & nums, int curr, int prev){
//         if(curr >=nums.size()){
//             return 0;
//         }
//         int include = 0;
//         if(prev == -1 || nums[curr] > nums[prev])
//             include = 1 + solveRec(nums,curr+1,curr);
            
//         int exclude = 0 + solveRec(nums,curr+1, prev);
//         int ans = max(include,exclude);
//         return ans;
        
//     }
      int solveMem(vector <int> & nums, int curr, int prev, vector <vector <int>>& dp){
        if(curr >=nums.size()){
            return 0;
        }
          if(dp[curr][prev+1] != -1){
              return dp[curr][prev+1];
          }
        int include = 0;
        if(prev == -1 || nums[curr] > nums[prev])
            include = 1 + solveMem(nums,curr+1,curr, dp);
            
        int exclude = 0 + solveMem(nums,curr+1, prev, dp);
        dp[curr][prev+1] = max(include,exclude);
        
        return dp[curr][prev+1];
        
    }
    int lengthOfLIS(vector<int>& nums) {
        int curr = 0;
        int prev = -1;
        int n = nums.size();
        vector <vector <int>> dp(n, vector <int> (n+1, -1));
        int ans = solveMem(nums,curr,prev, dp);
        return ans;
    }
};