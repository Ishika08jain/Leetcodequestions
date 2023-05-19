class Solution {
public:
    int search(vector<int>& arr, int target) {
       int s =0;
       int n = arr.size();
       int e = n-1;
       int mid = s+ (e-s)/2;
       for(int i =0;i<n;i++){
           
           if(arr[mid] == target){
               return mid;
           }
           if(arr[mid] < target){
               s = mid+1;
           }
           else{
               e = mid -1;
           }
           mid = s +(e-s)/2;
           
       }
       return -1;
       

    }
};