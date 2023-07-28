class Solution {
public:
    int n;
    long long dp[22][22][2];
    int solve(vector <int> &nums ,int i, int j, int chance){
        if(i>j){
            return 0;
        }
        if(dp[i][j][chance] != -1){
            return dp[i][j][chance];
        }
        if(chance ==0){
            return dp[i][j][chance]= max(nums[i] + solve(nums, i+1,j,1) , nums[j] + solve(nums, i,j-1, 1));
        }
        else{
            return dp[i][j][chance] = min(solve(nums, i+1,j,0), solve(nums,i,j-1,0));
        }
    }
    bool PredictTheWinner(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        long long t =0;
        n = nums.size();
        for(int i =0;i<n;i++){
            t += (long long)nums[i]; 
        }
        long long one = (long long)solve(nums,0,n-1,0);
        t -= one;
        return (t <= one);
    }
};