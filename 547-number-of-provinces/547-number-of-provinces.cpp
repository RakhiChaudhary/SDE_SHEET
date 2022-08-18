class Solution {
/*      int findCircleNum(vector<vector<int>>& isConnected) {
        
        int ans = 0;
        
        int n = isConnected.size();
        
        vector<bool>visited(n,false);
        
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                ans++;
                dfs(i,isConnected,visited);
            }
        }
        
        return ans;
    }
    
    void dfs(int vertex, vector<vector<int>>&adj, vector<bool>& visited)
    {
        visited[vertex]=true;
        
        for(int i=0;i<adj.size();i++)
        {
            if(visited[i]==false and adj[vertex][i]==1)
            {
                //visited[i]=true;
                dfs(i,adj,visited);
            }
        }
    }
};*/
public:
    void dfs(vector<int>l[],vector<int>&vis,int node){
        vis[node]=1;
        
        for(auto it:l[node]){
            if(!vis[it]){
                dfs(l,vis,it);
            
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
         int n=isConnected.size();
        vector<int>l[n];
       
       // int m=isConnencted[0].size();
        
       for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 && i!=j){
                    l[i].push_back(j);
                    l[j].push_back(i);
                }
            }
        }
        
        vector<int>vis(n,0);
        
        int count=0;
    //    int vis[n]={0};
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(l,vis,i);
            }
        }
        return count;
    }
};