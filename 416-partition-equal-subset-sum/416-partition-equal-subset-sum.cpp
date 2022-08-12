class Solution {
public:
   
    bool suyash(int n,vector<int> &nums,int sum,vector<vector<int>>& dp ){
   
        if(sum==0) 
            return true ;
        
        if(n>=nums.size() || sum<0) {
            return false;
        }
        if(dp[n][sum]!=-1) return dp[n][sum] ;
        
         if(nums[n]<=sum)
            return dp[n][sum]= suyash(n+1,nums,sum-nums[n],dp) || suyash(n+1,nums,sum,dp) ;
        else
         return dp[n][sum] =suyash(n+1,nums,sum,dp) ;
    }
   
    
    bool canPartition(vector<int>& nums) {
        
         int s=0;
        for(auto i:nums){
            s+=i;
        }
        if(s%2!=0){
            return false;
        } 
        int n =nums.size() ;
       vector<vector<int>> dp(n,vector<int>(s+1,-1)) ;
        
      return  suyash(0,nums, s/2,dp) ;
    }
};