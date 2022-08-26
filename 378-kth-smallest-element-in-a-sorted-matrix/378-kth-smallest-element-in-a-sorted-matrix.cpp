class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       int n = matrix.size() ;
        int low =matrix[0][0] ;
        int high =matrix[n-1][n-1] ;
        
        int temp ; 
        int count ;
        while(low<high){
           int mid = low +(high-low)/2;  
            temp =n-1 ;
            count =0  ;
            for(int i=0;i<matrix.size();i++){
                while(temp>=0 && matrix[i][temp]>mid) 
                    temp-- ;
                
                count+=temp+1 ;
            }
            if(count<k) 
                low= mid+1; 
            else{
                high =mid; 
            }
            
        }
    
        
        return low ;
    }
};