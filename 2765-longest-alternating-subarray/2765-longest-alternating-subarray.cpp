class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i =0;i<n-1;i++){
            int prev = nums[i];
            int count =0;
            int o = 1;
            for(int j = i+1;j<n;j++){
                if(nums[j]- prev ==o){
                    count = max(count, j-i+1);
                    o *= -1;
                    prev = nums[j];
                }else{
                    break;
                }
            }
            ans = max(ans, count);
        }
        return ans==0 ? -1 : ans;
    }
};