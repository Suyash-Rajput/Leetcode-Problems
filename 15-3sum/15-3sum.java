class Solution {
 
    List<List<Integer>> res=  new ArrayList() ;
    public List<List<Integer>> threeSum(int[] nums) {
       
        Arrays.sort(nums) ;
        for(int i=0;i<nums.length;i++) {
            if(i==0 || nums[i-1]!=nums[i]) 
                two(i+1,nums.length-1,nums,0-nums[i]) ;
        }
        
        return res ;
      
    }
    public void two(int i,int j,int[] nums,int target ) {
       
        int a =nums[i-1] ; 
        while(i<j) {
            
           if(nums[i]+nums[j]>target) {
                j-- ;
            }
            else if(nums[i]+nums[j]<target) i++ ;
            else{
                List<Integer> array = new ArrayList() ;
                array.add(a);
                array.add(nums[i]) ;
                array.add(nums[j]) ;
                res.add(array);
                while(i<j && nums[i]==nums[i+1])i++ ;
                while(i<j && nums[j]==nums[j-1]) j-- ;
                i++; 
                j-- ;
            }
        }
    }
        
    
};