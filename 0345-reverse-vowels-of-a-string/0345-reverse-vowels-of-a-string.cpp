class Solution {
public:
        bool isvowel(char ch)
    {
        
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ) return true;
  
       return false;
    }
    
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
           bool lowvowel = isvowel(s[i]);
           bool highvowel = isvowel(s[j]);
            if(lowvowel && highvowel)
            {
                swap(s[i],s[j]);
                i++;j--;
            }
            else if(!lowvowel) i++;
            else if(!highvowel) j--;
        }
         return s;
    
      
    }
};