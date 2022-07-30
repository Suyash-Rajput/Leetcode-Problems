class Solution {
public:
     vector<int> get(string s) {
         vector<int> freq(26,0);
        for(int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 'a']++;
        }
        return freq;
     }
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
     vector<string> s ;
        vector<int> max_Freq_w2(26, 0);   // store max freq of each character present in word2 stirngs
	   
        // we will Iterate over word to and try to find max freq for each character present in all strings.
		for(auto &x : words2) 
        {
            vector<int> freq = get(x);
            for(int i = 0; i < 26; i++)
            {
                max_Freq_w2[i] = max(freq[i], max_Freq_w2[i]);  // upadate freq to max freq
            }
        }
        
        for(auto &i:words1) {
            vector<int> fre =  get(i) ;
          bool f=  true ; 
            for(int i=0;i<26;i++) {
                if(fre[i]<max_Freq_w2[i]){
                    f= false; 
                    break ;
                }
                
                
            }
            if(f) s.push_back(i) ;
        }
      
        return s ;
    }
};