class Solution {
public:
  /*  bool check(int s,vector<int>adj[],vector<int>&vis){
        
        queue<pair<int,int>>q;
        q.push({s,-1});
        
        vis[s]=true;
        while(!q.empty()){
            int node=q.front().first;
            int par=q.front().second;
            q.pop();
            
            for(auto it:adj[node]){
                if(!vis[it]){
                vis[it]=true;
                    q.push({it,node});
                
                
            } 
                else if(par!=it)
                {
                    return true;
                }
            }
           
        }
        return false;
    } */
    
    bool iscycle(vector<int>adj[],vector<int> &vis,int id){
        if(vis[id]==1)
            return true;
        if(vis[id]==0){
            vis[id]=1;
            for(auto edge : adj[id]){
                if(iscycle(adj,vis,edge))
                    return true;
            }
        }
        vis[id] = 2;
        return false;
    }
    
    bool canFinish(int n, vector<vector<int>>& pre) {
         vector<int>adj[n];
        
        for(auto p : pre) {
            adj[p[0]].push_back(p[1]);
        }
        
        vector<int>visited(n , 0);
        
        for(int i = 0 ; i < n ; i++) {
            if(iscycle(adj,visited,i)) 
                return false;
        }
        return true;
    }
       /* vector<int>vis(V+1,0);
         vector<int>adj[V];
        
        for(auto p : pre) {
            adj[p[0]].push_back(p[1]);
        }
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if (check(i,adj,vis));
                return true;
            }
        }
        return false;/
     /*   vector<int>vis(V+1,0);
        queue<pair<int,int>>q;
        int s=adj[0][0];
        q.push({s,-1});
        
        vis[s]=true;
        while(!q.empty()){
            int node=q.front().first;
            int par=q.front().second;
            q.pop();
            
            for(auto it:adj){
                if(!vis[it]){
                vis[it]=true;
                    q.push({it,node});
                
                
            } 
                else if(par!=it)
                {
                    return true;
                }
            }
           
        }
        return false;*/
   // }
};


/*bool iscycle(vector<int>adj[],vector<int> &vis,int id){
        if(vis[id]==1)
            return true;
        if(vis[id]==0){
            vis[id]=1;
            for(auto edge : adj[id]){
                if(iscycle(adj,vis,edge))
                    return true;
            }
        }
        vis[id] = 2;
        return false;
    }
    
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int>adj[n];
        
        for(auto p : pre) {
            adj[p[0]].push_back(p[1]);
        }
        
        vector<int>visited(n , 0);
        
        for(int i = 0 ; i < n ; i++) {
            if(iscycle(adj,visited,i)) 
                return false;
        }
        return true;
    }*/