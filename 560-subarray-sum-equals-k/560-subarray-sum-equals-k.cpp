class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
      unordered_map<int,int>mp;
      int n=arr.size();
      int csum=0;
        int i=0;
        int count=0;
        
        while(i<n){
            csum+=arr[i];
            if(csum==k){
                count++;
            }
            if(mp.find(csum-k)!=mp.end()){
                count+=mp[csum-k];
            }
            mp[csum]+=1;
            i++;
        }
        return count;
    }
};