class Solution {
public:
    int search(vector<int>& nums, int target) {
         return suyash(nums,target,0,nums.size()-1) ;
        
    }
    int suyash(vector<int> &nums,int target,int start,int end) {
        if(start>end) return -1;
        else{
            int m = (start+end)/2 ;
            if(nums[m]==target) return m;
           else if(nums[m]>target) 
                return suyash(nums,target,start,m-1) ;
            else{
               return suyash(nums,target,m+1,end) ;
            }
        }
    
    }
};