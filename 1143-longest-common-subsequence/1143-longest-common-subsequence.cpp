class Solution {
public:
    int dp[1001][1001];
    
    int lcs(string &text1, string &text2,int s1,int s2){
        if(s1==text1.length() || s2==text2.length()){
            return 0;
        }
        if(dp[s1][s2]!=-1){
            return dp[s1][s2];
        }
        
        if(text1[s1]==text2[s2]){
            return dp[s1][s2]=1+lcs(text1,text2,s1+1,s2+1);
        }
        else{
            return dp[s1][s2]=max(lcs(text1,text2,s1,s2+1),lcs(text1,text2,s1+1,s2));
        }
    }
    
    int longestCommonSubsequence(string text1, string text2) {
     
        memset(dp,-1,sizeof(dp));
       return lcs(text1,text2,0,0);
    }
};