class Solution {
    
public:
 /*   void dfs(int r,int c,int init,int color,vector<vector<int>>ans,vector<vector<int>>image,int dr[],int dc[]){
        ans[r][c]=color;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int newrow=r+dr[i];
            int newcol=c+dc[i];
            
            if(newrow>=0 && newrow<n && newrow>=0 && newrow<m && image[newrow][newcol]==init && ans[newrow][newcol]!=color){
                dfs(newrow,newcol,init,color,ans,image,dr,dc);
            }
        }
    }*/
      void dfs(int r,int c,vector<vector<int>>& image,vector<vector<int>>&ans,
    int newColor,int initial,int dr[],int dc[]){
        
        ans[r][c]=newColor;
        int n=image.size();
        int m=image[0].size();
        
        for(int i=0;i<4;i++){
            int newrow=r+dr[i];
            int newcol=c+dc[i];
            
            if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && image[newrow][newcol]==initial && ans[newrow][newcol]!=newColor){
                dfs(newrow,newcol,image,ans,newColor,initial,dr,dc);
            }
            
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
     /*   vector<vector<int>>ans=image;
        int init=image[sr][sc];
        int dr[]={0,-1,0,1};
        int dc[]={-1,0,1,-1};
        dfs(sr,sc,init,color,ans,image,dr,dc);
            return ans;*/
        
        int initial =image[sr][sc];
         vector<vector<int>>ans=image;
         int dr[]={-1,0,+1,0};
         int dc[]={0,+1,0,-1};
         dfs(sr,sc,image,ans,color,initial,dr,dc);
         return ans;
        
    }
};