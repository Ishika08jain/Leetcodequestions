class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
        unordered_map <int, int > map;
        int maxi=1;
       for(int i =0;i< arr.size();i++){
          int n = arr[i];
           if(map.count(n-diff)>0){
               map[n] = map[n-diff] + 1;
           }else{
               map[n] = 1;

           }
           maxi = max(map[n], maxi);
       }
        return maxi;
       
    
    }
};