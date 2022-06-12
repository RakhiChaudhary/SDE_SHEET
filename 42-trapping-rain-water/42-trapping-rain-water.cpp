class Solution {
public:
    int trap(vector<int>& height) {
          /*   int ans=0;
        for(int i=1;i<height.size()-1;i++)
        {
            int val=min(height[i-1], height[i+1]);
            int x=val-height[i];
            if(x>0)
                ans+=x;
        }
        return ans;
       } */
        int n=height.size();
        int maxL[n];
        int maxR[n];
        maxL[0]=height[0];
        for(int i=1;i<n;i++){
            maxL[i]=max(maxL[i-1],height[i]);
        }
        
        maxR[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            maxR[i]=max(maxR[i+1],height[i]);
        }
        int water=0;
        for(int i=0;i<n;i++){
            water=water+(min(maxL[i],maxR[i])-height[i]);
        }
    return water;
    }
};