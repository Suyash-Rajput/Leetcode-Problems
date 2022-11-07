class Solution {
public:
    int reverse(int x) {
      long a =0 ;
        int temp ; 
        while(x!=0) {
            temp =x%10 ;
            a= a*10+temp ;
            x = x/10 ;
        }
      if(a>INT_MAX || a<INT_MIN)  
          return 0 ;
        
      else   
        return a ;
        
    }
};