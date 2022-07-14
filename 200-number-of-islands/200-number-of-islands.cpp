class Solution {
public:
        void mark_curr_island(vector<vector<char>> &grid, int x,int y, int r, int c){

        if(x<0 || x>=r || y<0 || y>=c || grid[x][y] != '1')
            return;

        grid[x][y] = '2';

        mark_curr_island(grid,x+1,y,r,c); // Makes Recursive Call Downwards;
        mark_curr_island(grid,x,y+1,r,c); // Makes Recursive Call Rightwards;
        mark_curr_island(grid,x-1,y,r,c); // Makes Recursive Call to top;
        mark_curr_island(grid,x,y-1,r,c); // Makes Recursive Call to left;

    }
    
    int numIslands(vector<vector<char>>& grid) {
       int rows = grid.size();

        if(rows == 0)
            return 0;

        int columns = grid[0].size();

        int numberOfIslands = 0;

        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(grid[i][j] == '1'){

                    mark_curr_island(grid,i,j,rows,columns);
                    numberOfIslands ++;

                }
            }
        }
        return numberOfIslands; 
    }
};





   
        