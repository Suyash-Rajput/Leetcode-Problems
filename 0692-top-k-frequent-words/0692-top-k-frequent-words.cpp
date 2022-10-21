struct compare{
    bool operator()(pair<int,string> a,pair<int,string> b) {
        if(a.first==b.first )  
            return  a.second>b.second ;
        else{
            return  a.first <b.first ;
        }
        
    }
   
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> m ;
        for(int  i=0;i<words.size();i++) {
            m[words[i]]++ ;
            
        }
  priority_queue<pair<int, string>, vector<pair<int, string>>, compare> p;
        for(auto f:m) 
               p.push({f.second,f.first}) ;
        
        vector<string> v; 
        
        while(k-- ){
            v.push_back(p.top().second ) ;
            p.pop() ;
        }
         
        return v ;
    }
};