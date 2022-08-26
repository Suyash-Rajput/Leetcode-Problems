class Solution {
public:
    bool isValid(string s) {
        stack<char> suy ;
        
        if(s.size()%2!=0) 
            return false ;
        
        for(int i=0;i<s.size();i++) {    
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ){
                suy.push(s[i]) ;
            }
            else if(suy.empty()) return false ;
            else{
                 
                if(suy.top()=='('){
                     if(s[i]!=')') 
                         return false ;
                     suy.pop();    
                }
               else  if(suy.top()=='['){
                     if(s[i]!=']') 
                         return false ;
                     suy.pop();    
                }
              else  if(suy.top()=='{'){
                     if(s[i]!='}') 
                         return false ;
                     suy.pop();    
                }
            }
            
        }
     return suy.empty()? true:false ;
    }
};

 