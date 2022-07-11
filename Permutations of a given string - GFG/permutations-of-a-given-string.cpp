// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    void solve(string s,int index,set<string>& ans){
        
        if(index >= s.length()){
            ans.insert(s);
            return;
        }
        
        for(int i = index ; i<s.length();i++){
            swap(s[index],s[i]);
        
            solve(s,index+1,ans);
        
            swap(s[index],s[i]);            
        }
    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string> ans;
        
        int index=0;
        
        solve(S,index,ans);
		
		vector<string> v;
		
		for(auto i: ans){
		        v.push_back(i);
		}
        
        sort(v.begin(),v.end());
        
        return v;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends