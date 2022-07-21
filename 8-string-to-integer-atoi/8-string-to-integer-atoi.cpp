class Solution {
public:
    int myAtoi(string s) {
           long res = 0;
        int sign = 1, ind = 0;
        ind = s.find_first_not_of(' ');
        if(ind == string::npos)return 0;
        
        if (s[ind] == '+' || s[ind] == '-') sign = s[ind++] == '+' ? 1 : -1;
        
        while (ind < s.length() && isdigit(s[ind])) {
            res = res * 10 + (s[ind++] - '0');
            if (res * sign > INT_MAX) return INT_MAX;
            if (res * sign < INT_MIN) return INT_MIN;
        }
        
        return res * sign;
    }
};