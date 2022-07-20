class Solution {
public:
    string interpret(string command) {
        string res="";
        int n=command.length();
        for(int i=0;i<n;i++){
            if(command[i]=='G'){
                res=res+command[i];
                continue;
            }
                
            else if(command[i]=='(' && command[i+1]==')')
            {
                res=res+'o';
                i++;
            } 
            else if(command[i]=='(' && command[i+1]=='a')
            {
                res=res+"al";
                i+=3;
            }   
        }
        return res;
    }
};

