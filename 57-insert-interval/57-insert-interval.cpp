class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
     int intervLen = intervals.size();
        int newIntervLen = newInterval.size();
        
        vector<vector<int>> ans;
        int i=0;
        int currMin = newInterval[0];
        int currMax = newInterval[1];
        
        // left which don't overlap
        while(i<intervLen and intervals[i][1]<currMin){ 
            ans.push_back(intervals[i]);
            i++;
        }
        
        // overlap each other keep track of min and max 
        while(i<intervLen and intervals[i][0] <= currMax){
            currMin = min(currMin, intervals[i][0]);
            currMax = max(currMax, intervals[i][1]);
            i++;
        }
        //push final to ans
        ans.push_back({currMin, currMax});
        
        // right who do not overlap
        while(i<intervLen){
            ans.push_back(intervals[i]);
            i++;
        }
        
        return ans;
    }
};