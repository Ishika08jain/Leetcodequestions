class Solution {
public:
    int divide(long int dividend,long int divisor) {
      long  int s =0;
   long int e =abs(dividend);
   long int ans = 0;
   long int mid = s + (e-s)/2;
    while(s<=e){
        //perfect solution
        if(abs(mid* divisor) == abs(dividend)){
            ans=  mid;
        }
        if(abs(mid* divisor) > abs(dividend)){
            e= mid -1;
        }
        else{
            //ans store
            //right search
            ans = mid;
            s = mid+1;
        }
        mid = s +(e-s)/2;


    }
    if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
    if((divisor<0) && (dividend<0)  || (divisor>0) && (dividend>0)){
        return ans;
    }else{
    return -ans;
}

        
    }
};