class Solution {
public:
    bool isPalindrome(string s) {
         string b ;
        for(int i=0;i<s.size();i++) {
          if(s[i]>='a' && s[i]<='z')
            b+=s[i];
        else if(s[i]>='A'&& s[i]<='Z')
                b+=tolower(s[i]);
        else if(s[i]>='0' && s[i]<='9')
            b+=s[i];
 
        }
        
        int a = b.size() ;
        for(int i =0;i<a/2;i++) {
            if(b[i]!=b[a-i-1]) return false ;
          
        }
          return true ;
    }
};