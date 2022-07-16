class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       /*  if(nums.size() == 0 ){
            return 0;
        }
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count=1;
        int ans =1;
        int prev[0];
        for(int i=1;i<n;i++)
        {
           if(nums[i]==prev+1)
                count++;
            
           
        }
        return count;*/
         /*if(nums.size() == 0 ){
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        
        int ans = 1;
        int prev = nums[0];
        int cur = 1;
        
        for(int i = 1;i < nums.size();i++){
            if(nums[i] == prev+1){
                cur++;
            }
            else if(nums[i] != prev){
                cur = 1;
            }
            prev = nums[i];
            ans = max(ans, cur);
        }
        return ans;
        */
        
        set<int>s;
        
        for(int num:nums){
           s.insert(num);
        }
        
        int ans=0;
       
        for(int num:nums){
            if(!s.count(num-1)){
                int curnum=num;
                int curstreak=1;
                
                while(s.count(curnum+1)){
                    curnum+=1;
                    curstreak+=1;
                }
                 ans=max(ans,curstreak);
            }
            
           
        }
        return ans;
    }
};