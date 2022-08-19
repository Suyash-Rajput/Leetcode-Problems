class Solution {
public:
    int search(vector<int>& nums, int target) {
        int  l=0 ;
      int  h=nums.size()-1;
        while(l<=h) {
            int  m = (l+h)/2;
            if(nums[m]==target) return m ;
         else   if(nums[l]<=nums[m]) {
            if(target>=nums[l] && target<nums[m] )
            h=m-1 ;
          else{
              l=m+1; 
          }
                
            }
            else if(nums[l]>=nums[m]) {
                if(target<=nums[m] or target>=nums[l])
                              h= m-1; 
                else 
                    l=m+1;
                }
        }
        
        return -1 ;
    }
};