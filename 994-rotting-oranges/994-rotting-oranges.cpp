class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
         
        queue<pair<pair<int,int>,int>>q;
        int vis[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                
                else{
                    vis[i][j]=0;
                }  
            }
        }
        
        int tm=0;
     
        int r_range[]={-1,0,1,0};
        int c_range[]={0,1,0,-1};
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int t=q.front().second;
            tm=max(tm,t);
            q.pop();
             for(int i=0;i<4;i++){
                 int newr=row+r_range[i];
                 int newc=col+c_range[i];
                 
                 if(newr>=0 && newr<n && newc>=0 && newc<m && vis[newr][newc]==0 && grid[newr][newc]==1){
                     q.push({{newr,newc},t+1});
                     vis[newr][newc]=2;
                 }
             }
               
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=2 && grid[i][j]==1){
                    return -1;
                }
            }
        }
        return tm;
            
        
    }
};