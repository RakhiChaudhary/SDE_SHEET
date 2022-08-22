class Solution {
public:
    int countGoodSubstrings(string x) {
        int count=0;
        if(x.size()<3)
            return 0;
        for(int i=0;i<=x.size()-3;i++){
           if(x[i]!=x[i+1] && x[i]!=x[i+2] && x[i+1]!=x[i+2])
               count++;
        }
        return count;
    }
};