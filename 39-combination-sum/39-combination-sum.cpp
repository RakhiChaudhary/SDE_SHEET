class Solution {
public:
    void helper(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans,int target){
        if(ind==nums.size()){
          if(target==0){
          ans.push_back(ds);
            
        }
            return;
        }
        
            if(nums[ind]<=target){
              ds.push_back(nums[ind]);
            helper(ind,nums,ds,ans,target-nums[ind]);
            ds.pop_back();  
            }
            helper(ind+1,nums,ds,ans,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>>ans;
        vector<int>ds;
       // sort(candidates.begin(),candidates.end());
        helper(0,candidates,ds,ans,target);
        return ans;
    }
};