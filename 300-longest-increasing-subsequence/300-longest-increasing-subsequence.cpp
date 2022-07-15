class Solution {
public:
     int f(int i,int j,vector<int>& nums,vector<vector<int>>& dp) {
        if (i==nums.size()+1) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        int len=f(i+1,j,nums,dp);
        if (j==0||nums[i-1]>nums[j-1]) len=max(1+f(i+1,i,nums,dp),len);
        return dp[i][j]=len;
    }
    
    int lengthOfLIS(vector<int>& nums) {
       vector<vector<int>> dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return f(1,0,nums,dp); 
    }
};

 
   