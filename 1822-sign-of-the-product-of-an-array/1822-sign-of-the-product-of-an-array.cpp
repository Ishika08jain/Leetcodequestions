class Solution {
public:
    int arraySign(vector<int>& nums) {
     int n = nums.size();
     int oc =0;
     
     for(int i =0;i<n;i++){
         if(nums[i]==0)
         {
             return 0;
         }
         if(nums[i] < 0){
             oc++;
         }
         }
         if(oc % 2==0){
             return 1;
         }
   
     else
         return -1;
     
    
    }
};