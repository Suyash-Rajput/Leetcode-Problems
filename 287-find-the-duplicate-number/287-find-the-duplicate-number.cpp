class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        map<int,int> m ;
        for(int i=0;i<nums.size();i++) {
            if(m[nums[i]]>0){
                return nums[i] ;
            }
             m[nums[i]]++ ;
        }
        
        return -1; 
        
    }
};