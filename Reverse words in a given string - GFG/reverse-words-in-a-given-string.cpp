// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        stack<string>st;
        int n=s.length();
        
        for(int i=0;i<n;i++){
          string temp="";
          while(s[i]!='.' && i<n)
          {
              temp+=s[i];
              i++;
          }
          st.push(temp);
          st.push(".");
        }
        
        string temp="";
        st.pop();
        int size=st.size();
        
        for(int i=1;i<=size;i++){
            temp+=st.top();
            st.pop();
        }
        return temp;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends