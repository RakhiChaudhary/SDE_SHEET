class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        int length = s.length();
        int blocks_nums = length / (2 * numRows - 2);
        int blocks_width = numRows - 1;
        int width = (blocks_nums + 1) * blocks_width;
        vector<vector<char>> vec(numRows, vector<char>(width, ' '));
        int i = 0, j = 0;
        bool flag = true;
        for (int pos = 0; pos < s.length(); ++pos) {
            if (flag == true) {
                vec[i][j] = s[pos];
                i += 1;
                if (i == numRows) {
                    flag = false;
                    i = numRows - 1;
                }
            }
            else {
                i -= 1;
                j += 1;
                vec[i][j] = s[pos];
                if (i == 0) {
                    flag = true;
                    i = 1;
                }
            }
        }
        string str = "";
        for(i = 0; i < vec.size(); ++i){
            for(j = 0; j < vec[0].size(); ++j){
                if(vec[i][j] != ' ')
                    str += vec[i][j];
            }
        }
        return str;
    }
};