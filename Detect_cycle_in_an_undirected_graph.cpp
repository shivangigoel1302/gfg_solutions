public:
void dfs(vector<bool>&visited, vector<int>adj[],int src, int parent,bool &cycle){
    visited[src] = true;
    for(auto nbr: adj[src]){
        if(nbr != parent && visited[nbr]){
            cycle = true;
            return;
        }
        else if(!visited[nbr]){
            dfs(visited,adj,nbr,src,cycle);
        }
    }
    return;
}
	bool isCycle(int V, vector<int>adj[]){
	    // Code here
	    vector<bool>visited(V,false);
	    bool hascycle = false;
	    for(int i = 0 ; i < V; i++){
	        if(!visited[i]){
	             dfs(visited,adj,i,-1,hascycle);
	        }
	    }
	    return hascycle;
	}
