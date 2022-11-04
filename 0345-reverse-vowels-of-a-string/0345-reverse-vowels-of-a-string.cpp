class Solution {
public:
    
    bool check(char s) {
    bool a = ( s=='a'  ||s=='e'|| s=='i'||s=='o'|| s=='u') ;
    bool b = (s == 'A' || s == 'E' || s == 'I' ||s == 'O' ||s == 'U') ;
        if(a ||b ){
            return true ;
        }
        else 
            return false ;
    }
    
    
    string reverseVowels(string s) {
      int  n = s.size() ;
        int i=0 ;
        int j = n-1 ;
        
        while(i<=j&&i!=n&&j!=-1  ){
            while(i<=j &&i!=n&&j!=-1 && !check(s[i])) i++ ;
            while(i<=j &&i!=n &&j!=-1&&!check(s[j])) j-- ;
            
            if(i<=j &&i!=n&&j!=-1 ) {
                swap(s[i],s[j]) ;
            }
            i++;
            j--;
            
        }
        
        return s ;
    }
};