class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map <char, int> freq;
      
        for(int i =0;i<s.length();i++){
            if(freq.find(s[i])==freq.end()){
                freq[s[i]] =1;
            }
            else{
                freq[s[i]]++;
            }
            
            
        }
         string str = "";
       
        for(int i =0;i<order.length();i++){
            char ch = order[i];
            if(freq.find(ch) != freq.end()){
                int count = freq[ch];
                freq.erase(ch);
                while(count-- >0){
                    str+= ch;
                }
            }
            
              
            
        }
        for(auto i =freq.begin();i!= freq.end();i++){
            int count = i-> second;
            while(count -- >0){
                str+= i-> first;
            }
        }
        return str;
    }
};