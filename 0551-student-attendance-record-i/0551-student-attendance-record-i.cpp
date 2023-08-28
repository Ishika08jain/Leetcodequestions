class Solution {
public:
    bool checkRecord(string s) {
        int count =0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'A'){
                count++;
                
            }
             
            if( (i > 0 && i < s.length()) && s[i] == 'L' && s[i-1] == 'L' && s[i+1] == 'L'){
                return false;
            }
           
            
        }
        if(count < 2){
                return true;
            }
        return false;
    }
};