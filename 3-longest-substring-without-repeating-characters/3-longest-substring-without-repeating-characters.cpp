class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int> v(128,-1) ;
        
        int i =0 ;
        int j =0 ;
        int count =0 ;
        while(j<s.size()) {
             char curr  = s[j];
            if(v[curr]==-1){
                v[curr]++ ;
                j++ ;
            }
            else{
                v[s[i]]-- ;
                i++;
            }
            count= max(count,j-i) ;
            
        }
         
        return count ;
        
        
        
        
 /*
        p-> i=0 j=1 ,m=1;
        w = i=0 j=2 m=2 ;
        w = i=1, j=2 m=1 ;
        k =  i=1,j=3 m=2;
         e = i=1 ,j=4 m=3
        w = i=2  ,j=5  m=3 
      
    */ 
        
     
        
    }
};
 