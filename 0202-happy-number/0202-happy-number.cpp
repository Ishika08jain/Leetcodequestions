class Solution {
public:
    int nextNum(int n){
        
        int sum = 0;
        while(n!=0){
            int temp = n%10;
            sum += temp * temp;
            n= n/10;
            
        }
        return sum;
    }
    bool isHappy(int n) {
      
       
       unordered_set <int> set;
        while(n!=1 && !set.count(n)){
            set.insert(n);
            n = nextNum(n);
        }
        return n==1;
       
        
    }
};