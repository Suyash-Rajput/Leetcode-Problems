class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n =matrix.size() ;
        int i =matrix[0][0] ;
        int  j=matrix[n-1][n-1] ;
        int count = 0;
      int temp ;
        while(i<j){
            int m = i+(j-i)/2 ; 
    temp = n-1 ;
            count= 0 ;
            for(int i=0;i<n;i++) {
                
                while(temp>=0  && matrix[i][temp]> m){
                    temp-- ;
                }
                count+=temp+1 ;
            }
            if(count<k) {
                i=m+1 ;
            }
            else {
                j=m ;
            }
            
        }
        
        return i ;
    }
};