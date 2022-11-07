class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> l = new ArrayList()  ;
        
        suyash("(",1,0,l,n);
        return l;
        
    }
   public void suyash(String s,int a,int b,List<String> result,int n) {
       if(s.length()==2*n) {
           result.add(s) ;
           return ;
       }
       
       if(a<n) suyash(s+"(",a+1,b,result,n)  ;
       if(b<a) suyash(s+")",a,b+1,result,n)   ;
       
      
   } 
    
    
}