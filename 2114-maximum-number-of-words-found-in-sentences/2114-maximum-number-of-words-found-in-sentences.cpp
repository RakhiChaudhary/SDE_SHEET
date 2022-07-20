class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words=INT_MIN;
        
       for(int i=0;i<sentences.size();i++){
           string s=sentences[i];
           int n=s.size();
           int count=1;
           for(int j=0;j<n;j++){
               if(s[j]==' ')
                   count++;
           }
           max_words=max(count,max_words);
       } 
        return max_words;
    }
};