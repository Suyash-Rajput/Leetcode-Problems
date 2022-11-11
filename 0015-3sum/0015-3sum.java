class Solution {
    
    List<List<Integer>> res  = new ArrayList() ;
    public List<List<Integer>> threeSum(int[] nums) {
           Arrays.sort(nums) ;
        for(int i =0;i<nums.length;i++) {
         if(i==0 || nums[i]!=nums[i-1])
            suyash(i+1,nums.length-1,nums,0-nums[i]) ;
            
              
        }
    return res ;
    }
   public void  suyash(int a,int b,int[] nums,int target) {
               int se = nums[a-1] ;
       
          while(a<b) {
                if(nums[a]+nums[b]>target){
                    b--;
                }
              else if(nums[a]+nums[b]<target){
                  a++;
              }
              else{
                  List<Integer> e =new  ArrayList() ;
                  e.add(se) ;
                  e.add(nums[a]) ;
                  e.add(nums[b]) ;
                  res.add(e) ;
                  while(a<b && nums[a]==nums[a+1]) a++  ;
                  while(a<b && nums[b]==nums[b-1]) b-- ;
                  a++; 
                  b-- ;
              }
           
           
       }
       
     
   }
    
    
}