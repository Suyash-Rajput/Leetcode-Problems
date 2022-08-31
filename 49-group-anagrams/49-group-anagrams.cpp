class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     vector<vector<string>> v ;
        map<string,vector<string>> m ;
        for(string s: strs){
            string a = s; 
            sort(s.begin(),s.end()) ;
            m[s].push_back(a) ;
            
        }
        for(auto i:m) {
            v.push_back(i.second) ;
        }
        
        return v ;
    }
};


