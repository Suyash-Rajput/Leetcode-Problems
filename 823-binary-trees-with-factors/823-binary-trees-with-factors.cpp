class Solution {
public:int mod = pow(10,9) + 7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end()) ;
        int n =0 ;  
        unordered_map<int,long> map ;
        map[arr[0]]=1; 
        
        for(int i= 1;i<arr.size();i++) {
            long count = 1 ;
            for(auto j:map) {
                int root= j.first ;
                if(arr[i]%root==0  && map.find(arr[i]/root)!= map.end()   ){
                    count+= map[root] * map[arr[i] / root];
                }
                    
            }    
            map[arr[i]]=count ;
        }
        for(auto i: map){
            n =(n+i.second)%mod ;
        }
        
        return n ;
    }
};