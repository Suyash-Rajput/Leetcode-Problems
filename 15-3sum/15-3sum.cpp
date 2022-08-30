class Solution {
public:
 vector<vector<int>> res;
    vector<vector<int>> threeSum(vector<int>& nums) {
    
        sort(nums.begin(),nums.end()) ;
        for(int i =0;i<nums.size();i++) {
            if(i==0 || nums[i-1]!=nums[i]){
                suyash(nums,i+1,nums.size()-1,0-nums[i]) ;
            }
        }
         
        return res ;
    }
    
    void suyash(vector<int> &nums,int a,int b,int target){
        int n =nums[a-1] ;
        
    while(a<b){
        
        if(nums[a]+ nums[b]>target) b-- ;
        else if(nums[a]+nums[b]<target) a++ ;
        
        else{
            vector<int> v; 
            v.push_back(n) ;
            v.push_back(nums[a]) ;
            v.push_back(nums[b]) ; 
            res.push_back(v) ;
            while(a<b && nums[a]==nums[a+1])a++ ;
            while(a<b && nums[b]==nums[b-1]) b-- ;
        a++; 
         b-- ;
        }
        
       
    }
        
        
    }

    
};