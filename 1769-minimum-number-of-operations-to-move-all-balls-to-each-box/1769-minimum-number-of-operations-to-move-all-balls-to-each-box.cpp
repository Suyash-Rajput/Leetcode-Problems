class Solution {
public:
    vector<int> minOperations(string boxes) {
       int n = boxes.size();
        vector<int> v  ;
        
        for(int i =0 ;i<n;i++){
            int sum =0 ;
            for(int j=0;j<n;j++) {
                if(boxes[j]=='1'&& i!=j) {
                    sum+=abs(i-j) ;
                }
            }
            v.push_back(sum ); 
        }
       
    return v ;
        
    }
};