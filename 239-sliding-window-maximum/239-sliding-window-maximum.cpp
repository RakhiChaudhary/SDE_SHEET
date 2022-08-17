class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            deque<int>dq;
    vector<int>ans;
    
    int i=0;
    int j=0;
    
    while(j<nums.size())
        {
        
         if(dq.empty()){ 
            dq.push_back(nums[j]);   
        }
       else
            {
            while(!dq.empty() && dq.back()<nums[j])
                {
                dq.pop_back();
                 }   
           dq.push_back(nums[j]);
             }
        
        
        if(j-i+1<k)
        {
            j++;
        }
        
        else if(j-i+1==k)
        {
            ans.push_back(dq.front());
            
            if(nums[i]==dq.front())
            {
                dq.pop_front();
            }
            i++;
            j++;
        }
    }
    return ans;
       /*nt n=v.size();
        vector<int>ans;
		deque<int>q;   
		for(int i=0;i<k;i++)     
        {
            while(!q.empty()&&q.back()<v[i])    
			
            {
                q.pop_back();;
            }
            q.push_back(v[i]);
        }
        ans.push_back(q.front());
		
        int j=k,i=0;
        while(j<n)
        {
		
            if(v[i]==q.front())
            {
                q.pop_front();
            }
			
            while(!q.empty()&&q.back()<v[j])
            {
                q.pop_back();
            }
			
            q.push_back(v[j]);
            ans.push_back(q.front());
			
            j++;
            i++;
        }
        return ans;*/
      /*    vector<int>ans;
		deque<int>q;   
        int n=v.size();
        int i=0;int j=0;
        while(j<n){
             while(!q.empty()&&q.back()<v[i])    
			
            {
                q.pop_back();;
            }
            q.push_back(v[i]);
            
            if(j-i+1<k){
                j++;
            }
            
            else if(j-i+1==k){
                ans.push_back(q.front());
            }
        }
        return ans;
           */
    }
};