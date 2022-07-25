class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
     vector<vector<int>>v{26,vector<int>()};
        for(int i=0;i<s.size();i++)
            v[s[i]-'a'].push_back(i);
        int count=0;
        
        for(auto word:words)
        {int lastindex=-1;
         bool flag=true;
         for( int i=0;i<word.size();i++)
         {auto it=upper_bound(v[word[i]-'a'].begin(),v[word[i]-'a'].end(),lastindex);
         if(it!=v[word[i]-'a'].end())
             lastindex=*it;
         else
         {flag=false;break;}
         }
            if(flag)
                count+=1;
         }
           return count;     
        
    }
};