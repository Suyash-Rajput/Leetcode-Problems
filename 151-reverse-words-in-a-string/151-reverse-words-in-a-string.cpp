class Solution {
    public String reverseWords(String s) {
         int  b = s.length() -1 ;
         String a = "" ;
        int  i = b ;
        while(i>=0) {
            
            while(i>=0 && s.charAt(i) == ' ') i-- ;
            int  j= i ;
            if(i<0) break ;
            while(i>=0 && s.charAt(i) != ' ' ) i-- ;
            
            if(a.isEmpty()) {
                a= a.concat(s.substring(i+1,j+1)) ;
            }
            else{ 
               a= a.concat(" " + s.substring(i+1,j+1)) ;
            }
            
        }
        
    return a ;    
    }
}