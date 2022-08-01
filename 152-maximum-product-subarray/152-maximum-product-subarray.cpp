class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size() ;
        int maxi =INT_MIN ; 
        int sum = 1; 
        for(int i=0;i<n;i++) {
               sum*=nums[i] ;          
              maxi = max(maxi,sum) ;
            if(sum==0) sum =1 ;
        }
          sum =1 ;
        for(int i=n-1;i>=0;i--) {
           sum *=nums[i] ;
            maxi =max(maxi,sum) ;
            if(sum==0) sum =1 ;
        }
        
        return maxi ;
    }
};