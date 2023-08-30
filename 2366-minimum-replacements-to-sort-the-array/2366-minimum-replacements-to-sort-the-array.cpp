class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n = nums.size();
        int last = nums[n-1];
        long long ans =0;
        for(int i=n-2;i>=0;--i){
          
            
            if(nums[i] > last){
                  int x = nums[i]/last;
            if(nums[i] % last)
                x++;
            last = nums[i]/x;
            ans += x-1;
            }
        else{
            last = nums[i];
        }
        }
        return ans;
        
    }
};