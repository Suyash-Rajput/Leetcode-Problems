class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
       if(nums.size() < 4) return {};
        set<vector<int>> st;
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size() - 3; i++) {
            for(int j=i+1; j<nums.size() - 2; j++) {
                
                int s = j + 1, e = nums.size() - 1;
                while(s < e) {
                    long long ll = (long long) nums[i] + nums[j] + nums[s] + nums[e];
                    if( ll == target) {
                        st.insert({nums[i], nums[j], nums[s], nums[e]});
                        while(s < e && nums[s] == nums[s + 1]) s++;
                        while(s < e && nums[e] == nums[e - 1]) e--;
                        s++, e--;
                    }
                    else ll < target ? s++ : e--;
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};