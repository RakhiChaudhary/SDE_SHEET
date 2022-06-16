class Solution {
public:
    void helper(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans,int target){
       
          if(target==0){
          ans.push_back(ds);
          return;  
        }
          
            for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            if(nums[ind]>target) break;
            ds.push_back(nums[i]);
            helper(i+1,nums,ds,ans,target-nums[i]);
            ds.pop_back();  
         }
           
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<vector<int>>ans;
        vector<int>ds;
       sort(candidates.begin(),candidates.end());
        helper(0,candidates,ds,ans,target);
        return ans;
    }
};