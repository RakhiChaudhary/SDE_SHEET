class Solution {
public:
   /* bool isPalindrome(string s,int i,int j){
        while(i<j)
            if(s[i++]!=s[j--])
             
         return false;
           return true;
    }*/
    
    string longestPalindrome(string s) {
      /* string lps="";
         int n=s.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
               if(j-i+1>lps.size() && isPalindrome(s,i,j)) 
               lps=s.substr(i,j-i+1);
            }
        }
        return lps;*/
        
          int n = s.length(), maxLen = INT_MIN, start;
        
        for(int i = 0; i < n; i++){
            int l = i, r = i;
            
            // same char checker
            while(l > 0 && s[l-1] == s[l])
                l--;
            while(r < n-1 && s[r+1] == s[r])
                r++;
            
            // skip same char
            i = r;
            
            // check palindrome for diff char from mid char
            while(l > 0 && r < n-1 && s[l-1] == s[r+1])
                l--, r++;
            
            // get max len palindrome and get start index palindrome
            if(r-l+1 > maxLen){
                maxLen = r-l+1;
                start = l;
            }
        }
        
        // get substring from s
        return s.substr(start, maxLen);
    }
};

