class Solution {
public:
    bool solveUsingMem(int index, vector <int> &nums, int target, vector <vector <int>>&dp){
        
        int n = nums.size();
        if(index >=n){
            return 0;
            
        }
        if(target <0){
            return 0;
            
        }
        if(target ==0){
            return 1;
        }
        if(dp[index][target] != -1){
            return dp[index][target];
        }
        int include = solveUsingMem(index+1, nums, target - nums[index], dp);
        int exclude = solveUsingMem(index+1, nums, target, dp);
        
        dp[index][target]=  include || exclude;
        return dp[index][target];
    }
//     bool solveUsingRec(int index, vector <int> &nums, int target){
        
//         int n = nums.size();
//         if(index >=n){
//             return 0;
            
//         }
//         if(target <0){
//             return 0;
            
//         }
//         if(target ==0){
//             return 1;
//         }
//         int include = solveUsingRec(index+1, nums, target - nums[index]);
//         int exclude = solveUsingRec(index+1, nums, target );
        
//         return  include || exclude;
//     }
    bool canPartition(vector<int>& nums) {
        
        
        int sum =0;
        for(int i =0;i<nums.size();i++){
            sum+= nums[i];
            
        }
        if(sum & 1){
            return false;
        }
        int target = sum/2;
        int index = 0;
        vector <vector <int> > dp(nums.size(), vector <int> (target+1, -1));
        bool ans = solveUsingMem(index, nums, target, dp);
        return ans;
        
    }
};