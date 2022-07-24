class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
       vector<int> f(101) ;
        ++f[rounds[0]] ;
        for(int i=0;i<rounds.size()-1;i++) {
            int s= rounds[i]+1  ;
            int e = rounds[i+1] ;
            
            for(int j=s;;j++) {
                
                 j %= (n + 1) ;
                if(!j) ++j ;
                ++f[j] ;
                if(j == e) break;
                
                if(j==e)break ;
            }
            
            
        }
         int maxi = *max_element(begin(f),end(f)) ; //get max freq
        vector<int> ans ;
		//check for max freq sectors
        for(int i = 1 ; i < f.size() ; ++i ) if(f[i] == maxi) ans.push_back(i) ;
        return ans ;
        
    }
};