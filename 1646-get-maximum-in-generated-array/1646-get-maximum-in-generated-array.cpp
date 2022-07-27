class Solution {
public:
    int getMaximumGenerated(int n) {
       vector<int> a(n+1);
     if(n==0)
         return 0;
      else if(n==1)
          return 1;
    a[0]  = 0;
    a[1]  = 1;
    int x = 1;
    
    
    for(int i = 2;i<=n;i++)
    {
         if(i%2==0)
             a[i] = a[i/2];
        else 
           {
            a[i] = a[x]+a[i-x];
            x++;
            }
    }
    sort(a.begin(),a.end());
	
    return a[a.size()-1];
    }
};