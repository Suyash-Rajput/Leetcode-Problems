class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> v ;
        map<string,vector<string>> m ;
        
        for(string b :strs) {
          string a = b ;
            sort(b.begin(),b.end()) ;
            m[b].push_back(a) ;
        }
        for(auto b :m) {
            v.push_back(b.second) ;
        }
         
     return v ;      
    }
};