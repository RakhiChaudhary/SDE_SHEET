class Solution {
public:
    vector<vector<int>> generate(int numRows) {
            vector<vector<int>> ans(numRows);
        
        for(int i=0;i<numRows;i++)
        {
            ans[i].resize(i+1);// ith row has i+1 elements
            
            ans[i][0]=ans[i][i]=1;//for each row 0th and ith is 1
            
            //loop to calculate sum of remaining elements from previous row  
            for(int j=1;j<i;j++)//this will start from row 3 for i=2
                ans[i][j]=ans[i-1][j] + ans[i-1][j-1];
        }
        return ans;
    }
};