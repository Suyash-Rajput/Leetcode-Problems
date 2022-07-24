class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
       vector<int> f(n) ;
        int s = rounds[0]-1 ;
        ++f[s] ;
        for(int i=0;i<rounds.size();i++) {
            while(s!=rounds[i]-1){
                s++ ;
                s%=n ;
                f[s]++ ;
            }
        }
         int maxi = *max_element(begin(f),end(f)) ; //get max freq
        vector<int> ans ;
		//check for max freq sectors
        for(int i = 0 ; i < n ; ++i ) if(f[i] == maxi) ans.push_back(i+1) ;
        return ans ;
        
    }
};
