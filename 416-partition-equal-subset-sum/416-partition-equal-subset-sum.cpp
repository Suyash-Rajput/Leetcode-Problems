class Solution {
public:
   
    bool suyash(int n,vector<int> &nums,int sum,vector<vector<int>>& dp ){
      
        
        if(sum==0) return true ;
        if(n<0||sum<0)
    {
        return false;
        }
        
        if(dp[n][sum]!=-1) return dp[n][sum] ;
        return  dp[n][sum]= suyash(n-1,nums,sum-nums[n],dp) || suyash(n-1,nums,sum,dp) ;
        
    }
    
    bool canPartition(vector<int>& nums) {
        
        int n =nums.size(); 
        int sum = 0;
        for(int i=0;i<n;i++) {
            sum+=nums[i] ;
        }
        if(sum&1) return false ;
        sum=sum/2 ;
       vector<vector<int>> dp(n,vector<int>(sum+1,-1)) ;
     
      return  suyash(n-1,nums, sum,dp) ;
    }
};