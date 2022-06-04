class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //OPTIMAL APPROACH
      int rows=matrix.size();
      int col=matrix[0].size();
      int col0=1;
      
      for(int i=0;i<rows;i++)
      {
        if(matrix[i][0]==0)
          col0=0;
        for(int j=1;j<col;j++)
        {
          if(matrix[i][j]==0)
          {
            matrix[i][0]=0;
            matrix[0][j]=0;
          }
        }
      }
      
      
      for(int i=rows-1;i>=0;i--)
      {
        for(int j=col-1;j>=1;j--)
        {
          if(matrix[i][0]==0||matrix[0][j]==0)
          {
            matrix[i][j]=0;
          }
        }
        if(col0==0)
          matrix[i][0]=0;
      }
      
    
        
      //BETTER APPROACH
      
    /*  int r=matrix.size();
      int c=matrix[0].size();
      vector<int>d1(r,-1);
      vector<int>d2(c,-1);
      
       for(int i=0;i<r;i++)
      {
        for(int j=0;j<c;j++)
        {
          if(matrix[i][j]==0)
          {
            d1[i]=0;
            d2[j]=0;
          }
        }
      }
      
       for(int i=0;i<r;i++)
      {
        for(int j=0;j<c;j++)
        {
          if(d1[i]==0||d2[j]==0)
          {
            matrix[i][j]=0;
          }
        }
      }
      */
        
      /* TIME LIMIT EXCEED SO NOT ALL CASES PASSED
      int r=matrix.size();
      int c=matrix[0].size();
      int index=0;
      for(int i=0;i<r;i++)
      {
        for(int j=0;j<c;j++)
        {
          if(matrix[i][j]==0)
          {
            index=i-1;
            while(index>=0)
            {
              if(matrix[index][j]!=0)
              {
                matrix[index][j]=-1;
                index--;
              }
            }
              
            index=i+1;
            while(index<r)
            {
              if(matrix[index][j]!=0)
              {
                matrix[index][j]=-1;
                index++;
              }
            }
            
            index=j-1;
            while(index>=0)
            {
              if(matrix[i][index]!=0)
              {
                matrix[j][index]=-1;
                index--;
              }
            }
            
             index=j+1;
            while(index<c)
            {
              if(matrix[i][index]!=0)
              {
                matrix[j][index]=-1;
                index++;
              }
            }
          }
        }
          
        }
      
      for(int i=0;i<r;i++)
      {
        for(int j=0;j<c;j++)
        {
          if(matrix[i][j]<=0)
            matrix[i][j]=0;
        }
      }
      */
      
        
    }
};