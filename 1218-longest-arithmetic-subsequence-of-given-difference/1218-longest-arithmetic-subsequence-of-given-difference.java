class Solution {
    public int longestSubsequence(int[] arr, int diff) {
        int n = arr.length;
        
        Map<Integer,Integer> map = new HashMap<>();
        int maxi = 1;
        
        for(int i = 0;i<n;i++){
            int num = arr[i];
            if(map.containsKey(num-diff)){
                map.put(num,map.get(num-diff)+1);
            }
            else{
                map.put(num,1);
            }
            maxi = Math.max(maxi,map.get(num));
        }
        return maxi;
    }
}