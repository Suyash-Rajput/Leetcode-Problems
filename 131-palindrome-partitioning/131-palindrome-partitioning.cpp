class Solution {
public:
    bool valid(int start,int end,string s) {
        while(start<=end) {
            if(s[start++]!=s[end--]) {
                return false ; 
            }
            
        }
      return true ;
    }
    
    
    void suyash(int index,string s,vector<string> path,vector<vector<string>> &v) {
        if(index==s.size()) {
            v.push_back(path) ;
            return ;
        }  
        
        for(int i=index;i<s.size();i++) {
            if(valid(index,i,s)){
                path.push_back(s.substr(index,i-index+1)) ;
                suyash(i+1,s,path,v) ;
                 path.pop_back();
            }
         
        }
        
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> v ;
        vector<string> path ;
        
        suyash(0,s,path,v) ;
        return v ;
    }
};