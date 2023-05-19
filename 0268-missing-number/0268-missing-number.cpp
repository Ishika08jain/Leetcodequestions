class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        
        for(auto num : nums){
            n ^= nums[i];
            n ^= i;
            i++;
        }
        return n;
    }
      
    
    
};