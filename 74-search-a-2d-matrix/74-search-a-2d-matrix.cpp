class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     /*int n=target[0].size;
        int m = 
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(matrix[i][j]==target)
                   return true;
            }
        }
        return false;*/
          int l=0;
        
        if(!matrix.size())
            return false;
       
        int h=(matrix.size()*matrix[0].size())-1;
        while(l<=h)
        {
            int mid = (l+(h-l)/2);
            if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]==target)
            {  return true;
            }
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()]<target)
            {
                 
                l=mid+1;
            }
            else{
              
                h = mid-1;
            }
        }
        return false;
    }
};