class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
         int n=words.size();
        
        unordered_map<string,int>mp;
        
        string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
       
        for(int i=0;i<n;i++){
            string s="";
            int m=words[i].size();
            for(int j=0;j<m;j++){
                s=s+arr[words[i][j]-'a'];
                
            }
            mp[s]=1;
        }
        return mp.size();
        
    }
};