// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
   /* void solver(int index,vector<int>&arr,int n,vector<int>ans,int sum){
        
         if(index==n){
           ans.push_back(sum);
          return;  
         }
       
        solver(index+1,arr,n,ans,sum+arr[index]);
        solver(index+1,arr,n,ans,sum);
        
        
        
    }*/
     void helper(vector<int> arr,int n,int ind,int sum,vector<int>&ans){
        if(n==0){ans.push_back(sum); return; }
        helper(arr,n-1,ind+1,sum+arr[ind],ans);
        helper(arr,n-1,ind+1,sum,ans);
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
       vector<int>ans;
       helper(arr,N,0,0,ans);
       return ans;
        
    
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends