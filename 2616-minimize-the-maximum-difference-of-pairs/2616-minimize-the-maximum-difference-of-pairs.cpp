class Solution {
public:
    bool solve (vector <int> &nums, int p ,int mid){
        int count = 0;
        for(int i =0;i<nums.size()-1;){
            if(nums[i+1] - nums[i] <= mid){
                count++;
                i +=2;
            }else{
                i++;
            }
        }
        if(count >= p){
            return true;
        }
        return false;
    }
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int low = 0;
        int high = nums[nums.size()-1] - nums[0];
        int ans = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(solve(nums,p,mid)){
                ans = mid;
                high = mid -1;
            }else{
                low = mid +1;
            }
        }
        return ans;
    
    }
};