class Solution {
    public List<List<Integer>> subsets(int[] nums) {
     List<List<Integer>> res = new ArrayList() ;
         List<Integer> curr=  new ArrayList<Integer>() ;
        suyash(0,nums,curr ,res) ; 
         
        return res ;
    } 

void suyash(int i  ,int[] arr,List<Integer> curr,List<List<Integer>> res) {
        
     res.add(new ArrayList(curr)) ;
    for(int a =i;a<arr.length;a++) {
        curr.add(arr[a]);
        suyash(a+1,arr,curr,res);
        curr.remove(curr.size()-1) ;
    }
   
 
}
    
//  


 /* void generateSubset(int index ,int[] nums,List<Integer> curr,List<List<Integer>> res) {
      res.add(new ArrayList(arr)) ;
      for(int i= index;i<nums.length;i++) {
      curr.add(nums[i]) ;
      generateSubset(i+1,nyms,curr,res) ;
       curr.remove(curr.size) -1      }
       
      
      
        res.add(new ArrayList(curr)) ;
         
      for(int i=index;i<nums.length;i++) {
          curr.add(nums[i]) ;
          generateSubset(i+1,nums,curr,res) ;
          curr.remove(curr.size()-1) ;
          
      }*/
        
    
}