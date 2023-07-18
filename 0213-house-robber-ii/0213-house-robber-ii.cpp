class Solution {
public:
      int solveMem(int i,vector<int> & nums, int n , vector<int> & dp){
         if(i>n){
            return 0;
        }
      
        if(dp[i]!= -1){
            return dp[i];
        }
        int include = solveMem(i+2, nums,n,  dp) + nums[i];
        int exclude = solveMem(i+1, nums, n, dp);
        dp[i]= max(include, exclude);
        return dp[i];
    
        
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector <int> dp(n, -1);
        if(n==1){
            return nums[0];
        }
        int fHouse = solveMem(0, nums, n-2 ,dp);
        for(int i =0;i<n;i++){
            dp[i] = -1;
        }
        int lHouse = solveMem(1, nums,n-1,dp);
        return max(fHouse, lHouse);
    
    }
};