class Solution {
public:
    bool search(vector<int>& nums, int target) {
       
     int low =0 ;
        int high=nums.size()-1; 
    while(low<=high) {
        int mid= (low+high)/2 ;
        if(nums[mid]==target) return true ;
     
      if(nums[low]==nums[mid] && nums[high]==nums[mid]){ low++; mid-- ;
                                                       }  
  else   if(nums[low]<=nums[mid]) {
        if(target>=nums[low] && target<=nums[mid] ) high =mid-1 ;
        else{
            low= mid+1 ;
        }
        }
        else if(nums[low]>=nums[mid]) {
            if(target<=nums[mid]  or target>=nums[low] ) high=mid-1 ;
            else low= mid+1;
        }
        
    }
        
        
        return false; 
    }
};