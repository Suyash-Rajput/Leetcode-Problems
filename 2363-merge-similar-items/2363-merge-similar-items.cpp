class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        
   //    for map you have to make a pair but for vector you have to simply make one array
     vector<int> v(1001) ;
        vector<vector<int>> ans;
        for(auto it:items1){
            v[it[0]]=it[1];
        }
        for(auto it:items2){
            v[it[0]]+=it[1];
        }
         
         for(int i=0;i<1001;i++){
            if(v[i]!=0){
                ans.push_back({i,v[i]});
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};