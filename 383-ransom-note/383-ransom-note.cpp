class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        
        int i = 0, j = 0;
        int n=ransomNote.size();
        int m=magazine.size();
        while(i < n and j < m)
        {
            if(ransomNote[i] == magazine[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        
        if(i == n)
            return true;
        return false;
        
      /*  sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int n=s2.size();
        int i;
        for(i=0;i<n;i++);
        {
            if(s2[i]!=s1[i])
                return false;
        }
        return true;*/
  
    }
};