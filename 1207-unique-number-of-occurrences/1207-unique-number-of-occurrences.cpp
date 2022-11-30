class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m ; 
        for(int i=0;i<arr.size();i++) {
            m[arr[i]]++ ;
        }
        
     unordered_set<int> s ;
        
        for(auto c:m) {
            if(s.count(c.second)) {
                return false ;
            } 
           else  
                s.insert(c.second) ;
        }
        return true ;
    }
};