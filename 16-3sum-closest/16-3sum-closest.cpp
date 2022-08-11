class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
                int ans = INT_MAX;
        int dj = 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int tar = target-nums[i];
            int s = i+1;
            int e = n-1;
            while(s<e){
                int sum = nums[e]+nums[s];
                int js= sum+nums[i];
                if(sum==tar) return target;
                else if(sum>tar){
                    e--;
                    if(abs(target-js)<ans){
                        ans = min(ans,abs(target-js));
                        dj = js;
                    }
                }
                else {
                    s++;
                    if(abs(target-js)<ans){
                        ans = min(ans,abs(target-js));
                        dj = js;
                    }
                }
                
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return dj;
    }


};