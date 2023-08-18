class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map <char,string> mpp;
        unordered_map <string,bool> vis;
        vector <string> l;
        int count =0;
        stringstream st(s);
        string word;
        while(st >> word){
            count++;
            l.push_back(word);
        }
        if(pattern.size() != count)
            return false;
        else
            for(int i =0;i<pattern.size();i++){
                char c = pattern[i];
                if(mpp[c] == "" && vis[l[i]] == true ){
                    return false;
                } 
                else if(mpp[c] == ""){
                    mpp[c] = l[i];
                    vis[l[i]]= true;
                }
                else{
                    if(mpp[c] != l[i]){
                        return false;
                    }
                }
            }
        
        return true;
   
    }
};