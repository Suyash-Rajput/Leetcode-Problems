class Solution {
public:
  
    int findMinArrowShots(vector<vector<int>>& points) {
      sort(points.begin(), points.end());
        vector<vector<int>> grid;
        grid.push_back(points[0]);
        
        for(int i=1; i<points.size(); i++)
        {
            int mn = max(grid.back()[0], points[i][0]);
            int mx = min(grid.back()[1], points[i][1]);
            
            if(mn <= mx) grid.back()[0] = mn, grid.back()[1] = mx;
            else grid.push_back(points[i]);
        }
        
        return grid.size();
        
        
    }
};