class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v ;
        vector<int> s ={-1,-1} ;
        for(int i=0;i<nums.size();i++) {
          if(nums[i]==target) {
              if(v.size()==2) {
                  v.pop_back() ;
              }
              v.push_back(i) ;
          }   
        }
        
        if(v.size()==1) v.push_back(v[0]);
        if(v.size()==0) return s ;
        
        
        return v ;
    }
};