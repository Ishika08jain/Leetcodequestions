class Solution {
public:
    int n;
    int solve(vector <int> &nums ,int i, int j, int chance){
        if(i>j){
            return 0;
        }
        if(chance ==0){
            return max(nums[i] + solve(nums, i+1,j,1) , nums[j] + solve(nums, i,j-1, 1));
        }
        else{
            return min(solve(nums, i+1,j,0), solve(nums,i,j-1,0));
        }
    }
    bool PredictTheWinner(vector<int>& nums) {
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