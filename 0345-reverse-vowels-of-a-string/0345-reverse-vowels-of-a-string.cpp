class Solution {
public:
    
    bool check(char s) {
        if( s=='a'  ||s=='e'|| s=='i'||s=='o'|| s=='u' ||s == 'A' || s == 'E' || s == 'I' ||s == 'O' ||s == 'U' ){
            return true ;
        }
        else 
            return false ;
    }
    
    string reverseVowels(string s) {
  
        vector<char> v ;
        for(int i=0;i<s.size();i++) {
            char t =s[i] ;
            if(check(t)) {
                v.push_back(t) ;
            }
        }
     for(int i=0;i<s.size();i++) {
        if(check(s[i])) {
          s[i] =v.back() ;
            v.pop_back() ;
        }
         
     }   
        
        return s ; 
        
    }
};