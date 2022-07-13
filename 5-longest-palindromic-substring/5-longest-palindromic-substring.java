class Solution {
    public String longestPalindrome(String s) {
        int n = s.length();
	    if (n < 2)
	        return s; 
	    int maxLength = 1,start=0;
	    int low, high;
	    for (int i = 0; i < n; i++) {
	        low = i - 1;
	        high = i + 1;
	        while ( high < n && s.charAt(high) == s.charAt(i))                                 
	            high++;
	       
	        while ( low >= 0 && s.charAt(low) == s.charAt(i))                   
	            low--;
	       
	        while (low >= 0 && high < n && s.charAt(low) == s.charAt(high) ){
	            low--;
	            high++;
	        }
	 
	        int length = high - low - 1;
	        if (maxLength < length){
	            maxLength = length;
	            start=low+1;
	        }
	    }   
	    return s.substring(start, start + maxLength );
    }
}