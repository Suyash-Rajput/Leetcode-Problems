class Solution {
public:
    int maximum69Number (int num) {
        vector<int> v ;
        
    int  a =0 ; 
        int suy =num ;
        while(suy) {
        a++ ;
            suy=suy/10 ;
    }
        
    string s = to_string(num) ;
         int e; 
        v.push_back(num) ;
        for(int i=0;i<a;i++){   
            if(s[i]=='6') 
                s[i]='9' ;
            else if(s[i]=='9') 
                s[i]='6' ;
           e= stoi(s) ;
            s=to_string(num) ;
          v.push_back(e) ;  
        }
        sort(v.begin(),v.end() ); 
        return  v.back() ;
        
        
    }
};