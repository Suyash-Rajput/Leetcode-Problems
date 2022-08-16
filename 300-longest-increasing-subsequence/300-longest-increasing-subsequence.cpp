class Solution {
public:
      
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int> t ;
t.push_back(nums[0]) ;
        
for(int i=1;i<nums.size() ;i++) {
    
    if (nums[i]>t.back()) {
        t.push_back(nums[i]) ;
    }
    else{
        int a = lower_bound(t.begin(),t.end(),nums[i]) -t.begin() ;
        t[a] =nums[i] ;
    }
}

return t.size() ;
        
    }
   
};
