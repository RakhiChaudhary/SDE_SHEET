class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=(int)nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>res;
                 for(int i=0;i<n-2;i++){
            if(i==0||(i>0 && nums[i]!=nums[i-1])){
                int front=i+1;
                int back=n-1;
                int sum=0-nums[i];
                while(front<back){
                    if(nums[front]+nums[back]==sum){
                        vector<int>v;
                        v.push_back(nums[i]);
                        v.push_back(nums[front]);
                        v.push_back(nums[back]);
                        res.push_back(v);
                         while(front<back && nums[front]==nums[front+1])
                         front++;
                       
                
                        while(front<back && nums[back]==nums[back-1])
                         back--;
                    
                        
                        front++;
                         back--;
                    }
                    
                    else if(nums[front]+nums[back]<sum)
                        front++;
            
                    
                    else
                        back--;
                    
                }
               }
              }
         return res;
              
  }
};
               
             /*  vector<vector<int>> res; 
        sort(num.begin(), num.end()); 
        
        // moves for a
        for (int i = 0; i < (int)(num.size())-2; i++) {
            
            if (i == 0 || (i > 0 && num[i] != num[i-1])) {
                
                int lo = i+1, hi = (int)(num.size())-1, sum = 0 - num[i];
                
                while (lo < hi) {
                    if (num[lo] + num[hi] == sum) {
                        
                        vector<int> temp; 
                        temp.push_back(num[i]); 
                        temp.push_back(num[lo]); 
                        temp.push_back(num[hi]); 
                        res.push_back(temp);
                        
                        while (lo < hi && num[lo] == num[lo+1]) lo++;
                        while (lo < hi && num[hi] == num[hi-1]) hi--;
                        
                        lo++; hi--;
                    } 
                    else if (num[lo] + num[hi] < sum) lo++;
                    else hi--;
               }
            }
        }
        return res;*/