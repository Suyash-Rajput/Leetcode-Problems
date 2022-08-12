class Solution {
public:
  
    int threeSumClosest(vector<int>& nums, int target) {
          int ans =INT_MAX ;
        int dj= 0 ;
        sort(nums.begin(),nums.end()) ;
        
        int n = nums.size() ;
        for(int r=0;r<n;r++) {
            int tar =target-nums[r] ;
            int i = r+1; 
            int j =n-1 ;
            while(i<j) {
                int sum = nums[i]+nums[j] ;
                int js= sum+nums[r] ;
                if(sum==tar) return target ;
                else if(sum>tar){
                     j-- ;
                    if(abs(target-js)<ans) {
                        ans =min(ans,abs(target-js) ) ;
                        dj = js ;
                    }
                }
                else{
                    i++ ;
                    if(abs(target-js)<ans) {
                        ans =min(ans,abs(target-js) ) ;
                        dj = js ;
                    }
                }
            }
            while(i+1<n &&nums[i]==nums[i+1]) i++;
        }
     return dj ;

        
    }

};