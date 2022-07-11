class Solution {
public:
    string minWindow(string s, string t) {
        
    string res = "";
        
        vector<int> v(128, 0);
        
        for(char c : t)
            v[c]++;
        
        int len = 0;
        int min_len = s.length() + 1;
        for(int start = 0, end = 0; end < s.length(); end++)
        {
            v[s[end]]--;
            if(v[s[end]] >= 0)
                len++;
            
            while(len == t.length())
            {
                if(end - start < min_len)
                {
                    min_len = end - start;
                    res = s.substr(start, min_len + 1);
                }
                
                v[s[start]]++;
                if(v[s[start]] > 0)
                    len--;
                start++;
            }
        }
        
        return res; 
    }
};