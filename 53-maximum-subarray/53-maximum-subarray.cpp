class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int msf=INT_MIN;
        int meh=0;
        int start=0;
        for(int i=0;i<n;i++){
            meh=meh+nums[i];
            if(meh>msf)
            {
                msf=meh;
            }
            if(meh<0)
            {
                meh=0;
                
            }
                
        }
        return msf;
    }
};