class Solution {
    public int longestConsecutive(int[] nums) {
      Set<Integer> HashSet=  new HashSet<Integer>() ;
        for(int i :nums){
            HashSet.add(i) ;
        }
        int ma =0 ;
        for(int a:nums) {
            if(!HashSet.contains(a-1)) {
                int c = a ;
                int currentbreak=1 ;
                while(HashSet.contains(c+1)) {
                    c++ ;
                    currentbreak++ ;
                }
                ma =Math.max(ma,currentbreak) ;
            }
               
        }
        
        
        return ma ;
        
   
    }
    
}
 