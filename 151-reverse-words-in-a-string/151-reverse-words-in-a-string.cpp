class Solution {
public:
    string reverseWords(string s) {
       /* string temp="";
        stack<string>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==' ' && !temp.empty()){
                st.push(temp);
                temp="";
            }
            
            else
                temp=temp+s[i];
        }
        if(!temp.empty()){
            st.push(temp);
        }
        string ans="";
        while(st.size()!=1){
            ans=ans+st.top()+" ";
            st.pop();
            
        }
        ans=ans+st.top();
        
        return ans;*/
        
          stack<string> st;
    for(int i=0;i<s.length();i++){
        string temp="";
        while(i<s.length()&&s[i]!=' '){
            temp+=s[i];
            i++;
        }
        if(temp.length()!=0)
        st.push(temp);
        }
    string res="";
    while(!st.empty()){
        if(st.size()==1){
            res+=st.top();
        }else{
            res+=st.top()+" ";
        }
        st.pop();
    }
    return res;
    }
};