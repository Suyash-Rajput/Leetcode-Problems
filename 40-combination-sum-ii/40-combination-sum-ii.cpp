class Solution {
public:
    void suyash(int ind,vector<int> &candidates,int target,vector<vector<int>> &res,vector<int> &v ) {
       if(target==0){
           res.push_back(v) ;
           return ;
       }
        for(int i=ind;i<candidates.size();i++) {
           if(i>ind && candidates[i]==candidates[i-1]) continue ;
            if(candidates[i]>target)break ;
            v.push_back(candidates[i]) ;
            suyash(i+1,candidates,target-candidates[i],res,v) ;
            v.pop_back() ;  
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end()) ;
        vector<vector<int>> res ;
        vector<int> v ;
         suyash(0,candidates,target,res,v) ; 
        return res ;
        
    }
};