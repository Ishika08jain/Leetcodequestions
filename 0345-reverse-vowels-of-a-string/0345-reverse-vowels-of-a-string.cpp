class Solution {
public:
    string reverseVowels(string s) {
        unordered_set <char> l;
        l.insert('A');
        l.insert('E');
        l.insert('I');
        l.insert('O');
        l.insert('U');
        l.insert('a');
        l.insert('e');
        l.insert('i');
        l.insert('o');
        l.insert('u');
        int n = s.length();
        int start = 0;
        int end = n-1;
        
        while(start<end){
            char x = s[start];
            char y = s[end];
            if(l.count(x) && l.count(y)){
                swap(s[start], s[end]);
                start++;
                end--;
            }
            else if(l.count(x)){
                end--;
            }
           else if(l.count(y)){
               start++;
           }
            else{
                start++;
                end--;
            }
            
            
        }
        return s;
      
    }
};