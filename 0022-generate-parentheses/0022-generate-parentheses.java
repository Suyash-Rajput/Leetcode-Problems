class Solution {
    public List<String> generateParenthesis(int n) {
      
        List<String> s = new ArrayList() ;
         suyash("(",1,0,s,n) ;
        
        
        return s ;
    }
 public void suyash(String a,int i,int j,List<String> s,int n) {
      if(a.length()==2*n) {
          s.add(a);
        return ;
      }
     if(i<n) suyash(a+"(",i+1,j,s,n) ;
     if(j<i) suyash(a+")",i,j+1,s,n)  ;
 }
    
}