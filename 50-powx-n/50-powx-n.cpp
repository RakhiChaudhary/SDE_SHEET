class Solution {
public:
    double myPow(double x, int n) {
     /*   double ans=1.0;
        if(n<0){
            n=-1*n;
            for(int i=0;i<n;i++){
                ans=(ans*x);
               
            }
             ans=(double)1/(double)ans;
        }
         else
         {
           for(int i=0;i<n;i++){
            ans=ans*x;
        }
         
         }
        return ans; */
        
    /*    double ans=0;
        long long nn=abs(n);
        while(nn){
            if(nn%2){
                ans=ans*x;
                nn=nn-1;
            }
            
            else
            {
                x=x*x;
                nn=nn/2;
            }
        }
        
        if(n<0){
            ans = (double)(1.0) / (double)(ans);
        }
        
        return (double)ans;*/
        
        
         double ans = 1.0;
        long long power_of_x = abs(n);
        
        while(power_of_x>0)
        {
            // if power is odd
            if(power_of_x%2==1)
            {
                ans = ans*x;
                power_of_x = power_of_x - 1;
            }
            // if power is even
            else if(power_of_x%2==0)
            {
                x = x*x;
                power_of_x = power_of_x / 2;
            }
        }
        
        if(n<0)
            return (double)1/(double)ans;
        
        return (double)ans;
    }
    
};