class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
     int a = intervals.size();
    vector<vector<int>> v ;
       int  i= 0;
        int currmin = newInterval[0] ;
        int currmax =newInterval[1] ; 
        while(i<intervals.size() && intervals[i][1]<currmin){
            v.push_back(intervals[i]) ;
            i++ ;
        }
        while(i<intervals.size() && intervals[i][0] <=currmax) {
            currmin= min(currmin,intervals[i][0]) ;
            currmax =max(currmax,intervals[i][1]) ;
            i++ ;
        }
    v.push_back({currmin,currmax}) ;
        while(i<intervals.size() ){
            v.push_back(intervals[i]) ;
             i++;
        }
        
        
        return v ;
    }
};