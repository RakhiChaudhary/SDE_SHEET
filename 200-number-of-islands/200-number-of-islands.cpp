class Solution {
public:
   
     void bfs(int row, int col, vector<vector<int>> &visited, vector<vector<char>> &grid){
        int m = grid.size();
        int n = grid[0].size();
        visited[row][col] = 1;
        queue<pair<int,int>> que;
        que.push({row, col});
        while(!que.empty()){
            int row = que.front().first;
            int col = que.front().second;
            que.pop();
            
            int dx[4] = {-1, 0, 1, 0};
            int dy[4] = {0, 1, 0, -1};
            for(int i=0; i<4; i++){
                    int nrow = row+dx[i];
                    int ncol = col +dy[i];
                    if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && !visited[nrow][ncol] && grid[nrow][ncol] == '1'){
                        que.push({nrow, ncol});
                        visited[nrow][ncol]=1;
                    }
                }
            }
        }
    
  

    /*void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>& grid)
    {
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            int dr[4]={-1,0,1,0};
           int dc[4]={0,-1,0,1};
            for(int k=0;k<4;k++){
               
                    int newrow=row+dr[k];
                    int newcol=col+dc[k];
                    
                    if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && !vis[newrow][newcol] &&
                          grid[newrow][newcol]=='1'){
                        q.push({newrow,newcol});
                       vis[newrow][newcol]=1;
                        
                    
                }
            }
        }
    }*/
    
    int numIslands(vector<vector<char>>& grid) {
        
       /* int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1');
                {
                    count++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return count;*/
     int m = grid.size();
        int n = grid[0].size();
        int count=0;
        vector<vector<int>> visited(m, vector<int>(n, 0));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(!visited[i][j]  && grid[i][j] == '1') {
                    count++;
                    bfs(i, j, visited, grid);
                }
            }
        }
        return count;
    }
};





   
        