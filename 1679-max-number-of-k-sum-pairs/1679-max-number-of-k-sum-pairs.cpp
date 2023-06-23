class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans=0;
        int n = nums.size()-1;
        sort(nums.begin(), nums.end());
        int i =0;
        
        
       
        while(i<n){
            if(nums[i] + nums[n] == k){
                ans++;
                i++;
                n--;
                
            }
           else if(nums[i] + nums[n] > k){
                n--;
            }
            else{
                i++;
            }
                
            }
            
        
        return ans;
        
    }
};