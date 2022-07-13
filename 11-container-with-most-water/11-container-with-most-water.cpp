class Solution {
public:
    int maxArea(vector<int>& height) {
        int l =0 ;
        int r = height.size() -1 ;
        int ma= 0 ;
            
        while(l<r ) {
            int i = height[l] ;
            int j = height[r] ;
            int mi = min(i,j) ;
             ma = max(ma,mi*(r-l)) ;
            
            if(i<j) l++;
            else  r-- ;
            
        }
        
        return ma ;
    }
};