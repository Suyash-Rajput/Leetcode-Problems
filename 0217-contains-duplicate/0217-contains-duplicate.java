class Solution {
    public boolean containsDuplicate(int[] nums) {
     HashMap<Integer,Integer> m =new  HashMap<Integer,Integer>() ; 
        for(int i=0;i<nums.length;i++){
           if(!m.containsKey(nums[i] )){
              m.put(nums[i],1);
           }
            else{
                return true ;
            }
            
            
            
        }
        
        return false;
    }
}