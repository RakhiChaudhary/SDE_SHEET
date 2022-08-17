class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
       /* deque<int>d;
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++){
            while(!d.empty() && d.front()==i-k)
                d.pop_front();
            while(!d.empty() && nums[d.back()]<=nums[i])
                d.pop_back();
            d.push_back(i);
            if(i>=k-1)
               ans.push_back(nums[d.front()]);
        }
        return ans;*/
        
        int n=v.size();
        vector<int>ans;
		deque<int>q;   //we created a simple "Deque"  it help us to add and remove the element from 
		                // front as well ass back
		for(int i=0;i<k;i++)     //In this loop I created a initial window
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
        return ans;
           
    }
};