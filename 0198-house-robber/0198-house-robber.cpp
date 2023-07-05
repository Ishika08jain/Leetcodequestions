class Solution {
public:
    int solveUsingRec(vector <int> & nums, int n){
        if(n<0){
            return 0;
        }
        if(n==0){
            return nums[n];
        }
        int include = solveUsingRec(nums, n-2) + nums[n];
        int exclude = solveUsingRec(nums, n-1) ;
        return max(include, exclude);
    }
    
    int solveMem(vector<int> & nums, int n , vector<int> & dp){
         if(n<0){
            return 0;
        }
        if(n==0){
            return nums[n];
        }
        if(dp[n]!= -1){
            return dp[n];
        }
        int include = solveMem(nums, n-2, dp) + nums[n];
        int exclude = solveMem(nums, n-1, dp);
        dp[n]= max(include, exclude);
        return dp[n];
    
        
    }
    int rob(vector<int>& nums) {
        
        int n = nums.size()-1;
        vector <int> dp(n+1 ,-1);
        return solveMem(nums,n,dp);
    }
};