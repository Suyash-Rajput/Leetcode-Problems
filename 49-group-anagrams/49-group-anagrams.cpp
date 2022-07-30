class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
         vector<vector<string>> v ;
        map<string,vector<string>> m ;
        for(string i:strs){
            string a= i ;
            sort(i.begin(),i.end()) ;
            m[i].push_back(a) ;
        }
        
        for(auto &a :m){
            v.push_back(a.second);
        }
        return v ;
    }
};

 
 