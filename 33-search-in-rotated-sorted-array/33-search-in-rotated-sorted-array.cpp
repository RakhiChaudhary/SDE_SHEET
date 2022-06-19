class Solution {
public:
    /*int bSearch(vector<int> &nums , int low , int high , int target){
        
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
    
    int solve(vector<int>&nums,int start,int end){
        end=nums.size();
        int mid;
        int n=nums.size();
        int next=(mid+1)%n;
        int prev=(mid-1)%n;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]<=nums[next] && nums[mid]<=nums[prev])
                return mid;
            if(nums[start]<=nums[mid])
                start=mid+1;
            else  if(nums[mid])
                end=mid-1;
        }
        return -1;
    }*/
    int search(vector<int>& nums, int target) {
      /*  int start=0;
        int end=nums.size();
        int ans=0;
        int index=solve(nums,0,end);
        if(index==-1)
            return index;
        else{
        int index1=bSearch(nums,0,index-1,target);
        int index2=bSearch(nums,index,end,target);
              ans=max(index1,index2);  
        }
        
        return ans;*/
        
    /* int start=0;
        int end=nums.size()-1;
        
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
                return mid;
            
            if(nums[start]<=nums[mid]){
                if(target >= nums[start] && target <= [mid])
                    end=mid-1;
                    else
                    start=mid+1;
            }
            
            else{
                if(target>=nums[mid] && target<=nums[end])
                {
                    start=mid+1;
                }
                else
                    end=mid-1;
            }
        }
        return -1;
    */    
                
        
 int low = 0, high = nums.size() - 1; 

  while (low <= high) { 
    int mid = (low + high) >> 1; 
    if (nums[mid] == target)
      return mid; 

    if (nums[low] <= nums[mid]) { 
      if (nums[low] <= target && nums[mid] >= target)
        high = mid - 1; 
      else
        low = mid + 1; 
    } else {
      if (nums[mid] <= target && target <= nums[high])
        low = mid + 1;
      else
        high = mid - 1;
    }
  }
  return -1; 
    }
};