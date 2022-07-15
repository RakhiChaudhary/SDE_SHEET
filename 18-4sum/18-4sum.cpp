class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int target) {
       /* vector<vector<int>>res;
        int n=nums.size();
        if(nums.empty())
            return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int target3=target-nums[i];
            for(int j=i+1;j<n;j++){
                int target2=target3-nums[j];
                int front=j+1;
                int back=n-1;
                while(front<back){
                    int target1=nums[front]+nums[back];
                    if(target1>target2){
                        back--;
                    }
                    else if(target1<target2){
                        front++;
                    }
                    else{
                        vector<int>v(4,0);
                        v[0]=nums[i];
                        v[1]=nums[j];
                        v[2]=nums[front];
                        v[3]=nums[back];
                        res.push_back(v);
                    
                    while(front<back && nums[front]==v[2]){
                        front++;
                        
                    }
                    
                    while(front<back && nums[back]==v[3]){
                        back--;
                    }
                  }
                
                }
                while(j+1<n && nums[j+1]==nums[j]){
                    j++;
                }
            }
            while(i+1<n && nums[i+1]==nums[i]){
                i++;
            }
        }
        return res;*/
        
        vector<vector<int> > res;
        
        if (num.empty())
            return res;
        int n = num.size(); 
        sort(num.begin(),num.end());
    
        for (int i = 0; i < n; i++) {
        
            long long target_3 = target - num[i];
        
            for (int j = i + 1; j < n; j++) {
            
                long long target_2 = target_3 - num[j];
            
                int front = j + 1;
                int back = n - 1;
            
                while(front < back) {
                
                    int two_sum = num[front] + num[back];
                
                    if (two_sum < target_2) front++;
                
                    else if (two_sum > target_2) back--;
                
                    else {
                    
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = num[i];
                        quadruplet[1] = num[j];
                        quadruplet[2] = num[front];
                        quadruplet[3] = num[back];
                        res.push_back(quadruplet);
                    
                        // Processing the duplicates of number 3
                        while (front < back && num[front] == quadruplet[2]) ++front;
                    
                        // Processing the duplicates of number 4
                        while (front < back && num[back] == quadruplet[3]) --back;
                
                    }
                }
                
                // Processing the duplicates of number 2
                while(j + 1 < n && num[j + 1] == num[j]) ++j;
            }
        
            // Processing the duplicates of number 1
            while (i + 1 < n && num[i + 1] == num[i]) ++i;
        
        }
    
        return res;
    }
};