class Solution {
    public int search(int[] nums, int target) {
      return suyash(nums,target,0,nums.length-1);
    }
   int suyash(int[] nums,int target,int start,int end) {
       if(start>end)
           return -1 ;
       
       if(start==end) return nums[start]== target ? start :-1 ;
       
       int mid = (start+end)/2 ;
       
       if(nums[mid]==target)
           return mid ;
       
       if(nums[mid]<target) {
           return suyash(nums,target,mid+1,end);
       }
       else{
           return suyash(nums,target,start,mid-1) ;
       }
       
   }
}