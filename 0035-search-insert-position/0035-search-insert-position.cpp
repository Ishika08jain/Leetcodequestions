class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s =0;
        int e = nums.size() - 1;
        int mid = e +(s-e)/2;
        int ans =-1;
        while(s<=e){
        if(nums[mid]== target){
            return mid;
        }
       if(target < nums[mid]){

            e = mid -1;
            
            
        }else{
            s = mid+1;
            ans = e;

        }
        mid = s+ (e-s)/2;
        }
        return s;
        
    }
};