class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
    vector<int>  vp(26,0) ;
    vector<int> vs(26,0) ;
    vector<int> v ;
        
        int m = p.size() ;
        int n =s.size() ;
        for(int i=0;i<m;i++) {
            vp[p[i]-'a']++ ;
        }
        
        for(int i=0;i<s.size();i++) {
            if(i<m ){
                vs[s[i]-'a']++ ;
                if(vs==vp) v.push_back(i-m+1) ;
              continue; 
            }
            vs[s[i]-'a']++ ;
            vs[s[i-m]-'a']-- ;
            
            if(vs==vp) v.push_back(i-m+1) ;
        }
        
        
        return v ;
        
    }};