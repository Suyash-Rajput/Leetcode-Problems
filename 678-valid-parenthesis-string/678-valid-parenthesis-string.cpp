class Solution {
public:
 bool checkValidString(string s) {
      
        stack<int> open,close;
        int n= s.size();
        for(int i=0;i<n;++i) {
            if(s[i]=='(') 
                open.push(i) ;
            else if(s[i]=='*' ) 
                close.push(i) ;
            else{
                if(!open.empty()) 
                    open.pop() ;
                else if(!close.empty()) 
                    close.pop() ;
                else 
                    return false ;
                
            }
        }
            
        while(!open.empty()) {
            if(close.empty()) {
                return false; 
            }
            else if(open.top()<close.top()) {
                open.pop() ;
                close.pop() ;
            }
            else{
                return false; 
            }
            
            
        }
        return true ;
    }
};