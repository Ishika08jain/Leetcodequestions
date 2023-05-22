class Solution {
public:
    int compress(vector<char>& chars) {
        int i =0;
        int res=0;
        while(i<chars.size()){
            int grplen = 1;
            while(i + grplen < chars.size() && chars[i+ grplen] == chars[i]){
                grplen++;
            }
            chars[res++]= chars[i];
            if(grplen>1){
                for(char c : to_string(grplen)){
                    chars[res++] = c;
                }
            }
            i += grplen;
        }
        return res;
    }
};