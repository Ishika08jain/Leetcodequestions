class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector <string> ans;
        int i=0;
        int n = words.size();
        while(i <n){
            int j= i+1;
            int lineLen = words[i].size();
            while(j <n &&  lineLen + words[j].size() + (j-i) <= maxWidth){
                lineLen += words[j].size();
                j++;
            }
            int numWords = j-i;
            int numSpace = maxWidth - lineLen;
            string line;
            if(numWords == 1 || j==n){
                line = words[i];
                for(int k = i+1;k<j;k++){
                    line += ' ' + words[k];
                }
                line += string(maxWidth - line.size(), ' ');
            }else{
                int spaceinBtw = numSpace/ (numWords-1);
                int extra = numSpace % (numWords-1);
                line = words[i];
                for(int k= i+1;k<j;k++){
                    line += string(spaceinBtw, ' ');
                    if(extra >0){
                        line += ' ';
                        extra--;
                    }
                    line += words[k];
                    
                }
            }
            ans.push_back(line);
            i =j;
        }
        return ans;
    }
};