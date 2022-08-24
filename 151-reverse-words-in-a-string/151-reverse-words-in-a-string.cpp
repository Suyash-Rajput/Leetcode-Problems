class Solution {
public:
    string reverseWords(string s) {
    int i =0 ;
        string r ="" ;
    int  n=s.size();
        int j  ;
        while(i<n) {
            
            while(i<n && s[i]==' ')i++ ;
            if(i>=n) break ;
            j=i;
            while(j<n && s[j]!=' ')j++;
            
            string sub = s.substr(i,j-i) ;
            if(r.size()==0) r= sub ;
            else{
                r= sub+ ' ' +r ;
            }
            i=j+1; 
        }
        
        
     return r ;   
    }
};

 
 