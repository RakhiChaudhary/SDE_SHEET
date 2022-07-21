class Solution {
public:
    string reverseWords(string s) {

        /*  stack<string> st;
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
    return res;*/
     /*   int left=0;
        int right=s.size()-1;
        string ans="";
        string temp="";
        while(left<=right){
            char ch=s[left];
            if(ch!=' '){
                temp=temp+ch;
            }
            else {
                if(ans!="")
                ans=temp+" "+ans;
                
                else
                    ans=temp;
                temp="";
            }
            left++;
        }
        
        if(temp!=""){
            if(ans!="")
                ans=temp+" "+ans;
                
                else
                    ans=temp;
        }
        return ans;*/
   
     int n=s.length();
        int i=0;
        string result;
        while(i<n){
            while(i<n&&s[i]==' ')
                i++;
            if(i>=n)
                break;
            int j=i+1;
            while(j<n&&s[j]!=' ')
               j++;
                string sub=s.substr(i,j-i);
                if(result.length()==0)
                    result=sub;
                else
                    result=sub+" "+result;
            i=j+1;
                
            
           
        }
        return result;
    }
};

