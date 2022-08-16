class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
       /* int count=0;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            int x=2*nums[j];
            while(x!=nums[i]+nums[k]){
                if(x<nums[i]+nums[k]){
                    k--;
                }
                
                else if(x>nums[i]+nums[k]){
                    break;
                }
                else
                    count++;
            }
        }
        return count;*/
        
        int ans=0;
        for(int i=0;i<=nums.size()-3;i++)
        {
            int start=i+1;
            int end = nums.size()-1;
            while(start<end)
            {  
                
                if(nums[start]-nums[i]==diff and nums[end]-nums[start]==diff)
                {
                    
                    ans++;
                    break;
                } 
                
               if((nums[start]-nums[i])<diff) 
               {
                   start++;
               }
                else
                if((nums[end]-nums[start])>diff)
                {
                    end--;
                }
                
                else
                    break;
            }
        }
            return ans;
    }
};