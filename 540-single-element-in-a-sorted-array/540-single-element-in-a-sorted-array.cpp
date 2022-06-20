class Solution {
public:
   /* int solver(vector<int>&nums,int start,int end);
    {
         int start=0;
        int end=nums.size()-1;
        int n=nums.size();
        int prev=(mid-1)%n;
        int next=(mid+1)%n;
        int mid;
        while(start<=end){
          mid=start+(end-start)/2;
            if()
    }*/
  /*  int mid=(low+high)/2;
        if(mid%2==0 && nums[mid]==nums[mid+1] || mid%2!=0 && nums[mid]==nums[mid-1]) low=mid+1;
        else high=mid;*/
    
       /*     if(n == 1) return nums[0];
        else if(nums[0] != nums[1]) return nums[0];
        else if(nums[n-1] != nums[n-2]) return nums[n-1];
        
        int start = 0, end = n-1;
        while(start <= end){
            int mid = start + (end-start)/2;
            
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];
            
            if(mid%2 == 0 && nums[mid+1] == nums[mid] || 
               mid%2 == 1 && nums[mid-1] == nums[mid]) {
                start = mid+1;
            }
            else end = mid-1;*/

    
    int singleNonDuplicate(vector<int>& nums) {
       int start=0;
         int n=nums.size();
        int end=nums.size()-1;
       
         int mid;
        int prev=(mid-1)%n;
        int next=(mid+1)%n;
        if(n == 1) return nums[0];
        else if(nums[0] != nums[1]) return nums[0];
        else if(nums[n-1] != nums[n-2]) return nums[n-1];
        
        while(start<=end){
          mid=start+(end-start)/2;
            //if((nums[mid]!=nums[prev]) && (nums[mid]!=nums[next]))
               // return mid;
            if((mid%2==0 && nums[mid]==nums[mid+1]) ||(mid%2==1 && nums[mid]==nums[mid-1] ))
            {
        
                    start=mid+1;
               
            }
            
            else{
               
                    end=mid-1;
                }
            
        }
        return nums[start];
       
    }
};