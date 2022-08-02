class Solution {
public:
vector<vector<int>> res;
    void helper(vector<int>& nums, int idx){
        if (idx >= nums.size()){
            res.push_back(nums);
            return;
        }
        for (int i = idx; i < nums.size(); ++i){
            if(idx<i && nums[i]==nums[idx]  ) continue ;
            swap(nums[idx], nums[i]);
            helper(nums,idx+1);
            
        }
        for (int i = nums.size() - 1; i > idx; --i) {
                swap(nums[idx], nums[i]);
            } 
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        helper(nums,0) ;
        return res ;
    }
};