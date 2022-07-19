class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int n = nums.size() ;
        int count =0  ;
        unordered_map<int,int> s ;
        int sum =0 ; 
        for(int i=0; i<nums.size();i++) {
            sum+= nums[i] ;
            if(sum==k) count++; 
            if(s.find(sum-k)!=s.end() ) count+=s[sum-k] ;
            s[sum]++ ;
            
            
        }
        
        
        return count  ;
    }
};