class Solution {
public:
    int numTrees(int n) {
       
  /*vector<int>dp(n+1);

    dp[0]=1;
    dp[1]=1;
    
for(int k =2;k<=n;k++ ) 
{
    int ans =0;
    int i =0 , j=k-1;
    
    while(i<=k-1 && j >=0)
    {
        ans+= dp[i]*dp[j];
        i++;
        j--;
    }
    
    dp[k] = ans;
}

return dp[n];*/
        
        vector<int>v(n+1);
        
    v[0]=1;
    v[1]=1;
        if(n>1)
    v[2]=2;
        
        if(n==1 || n==2)
            return v[n];
      
        for(int i=3;i<=n;i++)
        {
            int sum=0;
            
            for(int j=0;j<i;j++)
            {
                sum+=v[j]*v[i-j-1];
            }
            
            v[i]=sum;
            
        }

   return v[n];
}
}; 
