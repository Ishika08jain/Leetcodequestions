class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int maxi =1;
        int start =0;
        for(int i =1;i<n;i++){
            int left=i;
            int right =i;
            while(left >=0 && right<n && s[left]==s[right]){
                int curr = right-left+1;
                
            
            if(curr > maxi){
                maxi = curr;
                start = left;                
            }
            left--;
            right++;
            }
            left = i-1;
            right = i;
            
             while(left >=0 && right<n && s[left]==s[right]){
                int curr = right-left+1;
                
            
            if(curr > maxi){
                maxi = curr;
                start = left;                
            }
            left--;
            right++;
        }
}



         return s.substr(start,maxi);
    }
};