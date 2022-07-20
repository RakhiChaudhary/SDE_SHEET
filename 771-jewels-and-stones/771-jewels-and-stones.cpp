class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int je=jewels.length();
        int s=stones.length();
        int count=0;
        for(int i=0;i<s;i++){
            char temp=stones[i];
            for(int j=0;j<je;j++){
                if(temp==jewels[j])
                {
                    count++;
                    break;
                } 
            }
        }
        return count;
    }
};