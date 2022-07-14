class Solution {
public:
    unordered_map <int, bool>mp;
    bool ok = true;
    unordered_map <int, bool>colors;
    bool isBipartite(vector<vector<int>>& graph) {
        int sz = graph.size();
		// pre-deal with two maps
        for (int i = 0; i < sz; i++){
            mp[i] = false;
            colors[i] = false;
        }
        for (int i = 0; i < sz; i++){
            if (!mp[i]){
                traverse(i, graph);
            }
        }
        return ok;
    }
    
    
     void traverse(int i, vector<vector<int>>& graph){
		//if ok is already false, there is a conflict in coloring, return
        if (!ok){
            return;
        }
        mp[i] = true;
        for (auto node : graph[i]){
			//if the node has not been visited/colored, color the opposite color and traverse
            if (!mp[node]){
                colors[node] = !colors[i];
                traverse(node, graph);
            }
            else{
				//if not, compare two nodes' color, if same, change ok to false;
                if (colors[i] == colors[node]){
                    ok = false;
                    return;
                }
            }
        }
        return;
     }
};


    
   