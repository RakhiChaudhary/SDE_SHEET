class Solution {
public:
    string defangIPaddr(string address) {
    
      /*  int i, len = address.length();
        string result = "";
        
        for(i=0; i<len; i++){
            if(address[i] == '.'){
                result = result + "[.]";
                continue;
            }
            result = result + address[i];
        }
        return result;*/
   
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                address.replace(i,1,"[.]");
                i+=2;            //we are going to add extra 2 characters ( [ ] ) so we have to increment i with 2
            }
        }
        return address;
        
        
    }
};

  /* if (s[i] == '.') 
        {
            s.insert(i, "[");
            i += 2;
            s.insert(i, "]");
        }
        i++;*/