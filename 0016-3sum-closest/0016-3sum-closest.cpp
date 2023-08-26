class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closestSum =INT_MAX;
        int mindiff = INT_MAX;
        for(int i=0;i<n-2;i++){
            int left = i+1;
            int right = n-1;
            while(left <right){
                int currSum = nums[i]+nums[left]+ nums[right];
                int diff  = abs(currSum - target);
                if(diff < mindiff ){
                   mindiff = diff;
                    closestSum = currSum;
                 
                }
               if(currSum < target){
                    ++left;
                }else{
                   --right;
               }
            }
        }
        return closestSum;
    }
    
};