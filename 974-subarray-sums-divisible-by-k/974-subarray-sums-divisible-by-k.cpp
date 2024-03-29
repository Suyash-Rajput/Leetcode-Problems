class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp ;
      mp[0]=1;
        int sum =0 ;
        int count =0 ;
        for(int i=0;i<nums.size();i++) {
            sum =sum+nums[i] ;
            int r = sum%k ;
            if(r<0) 
                r+=k ;
            count =count+ mp[r] ;
            mp[r]++ ;
        }
        return count ;
         
        
    }
};