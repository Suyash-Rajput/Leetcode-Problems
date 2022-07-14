class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int count= 0;
        int i=0 ;
        int j=0 ;
        vector<int> v(128,-1) ;
   
       
       while(j<s.size()) {
           char curr_char = s[j];
           if(v[curr_char]==-1){
               j+=1; 
               v[curr_char]++ ;
           }
           else{
               v[s[i]] -- ;
               i++ ;
           }
           count=max(count,j-i) ;
       }        
        
        return count ;
 /*
        p-> i=0 j=0 ,m=1;
        w = i=0 j=1 m=1 ;
        w = i=1, j=2 m=1 ;
        k =  i=1,j=3 m=2;
         e = i=1 ,j=4 m=3
        w = i=2  ,j=5  m=3 
   */ 
    }
};