class Solution {
public:
    int search(vector<int>& nums, int target) {
       
        int j = nums.size()-1 ;
        int i=0 ;
        
       while(i<=j) {
           int m =(i+j)/2 ;
           if(nums[m]==target) return m ;
           else if(nums[i]<=nums[m]) {
               if(nums[i]<=target && nums[m]>target)  j= m-1 ; 
               else {
                   i=m+1; 
               }
           }
           else if(nums[i]>=nums[m]){
               if(nums[i]<=target || target<nums[m] ) j = m-1 ;
               else
                   i =m+1 ;
           }
            
       } 
        
        return -1 ;
    }
};